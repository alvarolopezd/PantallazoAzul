#include "Esfera.h"
#include "Cono.h"
#include "Cilindro.h"
#include "Enemigo.h"
#include "Escobas.h"
#include "Escenario.h"
#include "glut.h"



void OnDraw(void);
void OnTimer(int value);
void OnKeyboardDown(unsigned char key, int x, int y);

Escenario esc1;
Escobas e1;

int main(int argc, char* argv[])
{
	e1.SetAtributos(0, 0.1, 0, 0, 0, 0);


	//Inicializar el gestor de ventanas GLUT
	//y crear la ventana
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Remy And The Lost Cheese"); ///NOMBRE EL NOMBRE DEL JUEGO

	//habilitar luces y definir perspectiva
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(40.0, 800 / 600.0f, 0.1, 150);

	//Registrar los callbacks, se programan y van en funcion de los eventos, cuando ocurre un evento, el compilador se pone a ejecutar una funcion
	glutDisplayFunc(OnDraw); /// Se encara de pintar los objetos en la pantalla, se le pasa como parametro una funcion para hacer el dibujo
	glutTimerFunc(25, OnTimer, 0);//le decimos que dentro de 25ms llame 1 vez a la funcion OnTimer() /// Hacer que el objeto se mueva cada 25 ms
	glutKeyboardFunc(OnKeyboardDown); ///Detecta el teclado



	//pasarle el control a GLUT,que llamara a los callbacks
	glutMainLoop();

	return 0;
}
void OnDraw(void) /// Funcion para dibujar
{
	//Borrado de la pantalla àra evitar que haya otras cosas en la pantalla 
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(-45.0f, 120.0f, 40.1f,  // posicion del ojo
		-45, 0, 40,      // hacia que punto mira  (0,0,0) 
		0.0, -1.0, 0.0);      // definimos hacia arriba (eje Z)
	////PAR QUE NO HAGA MIERDAS RARAS HAY QUE MODIFICAR A LA VEZ EL PUNTO DEL OJO Y EL DE VISTA
	////EJE Z BIEN EJE X MAL

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	//pared roja
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glColor3ub(255, 0, 0);
	glVertex3f(0.0f, 10.0f, 0.0f);
	glColor3ub(255, 0, 0);
	glVertex3f(10.0f, 10.0f, 0.0f);
	glColor3ub(255, 0, 0);
	glVertex3f(10.0f, 0.0f, 0.0f);
	//pared verde
	glColor3ub(0, 255, 0);
	glVertex3f(0.0f, 0.0f, 10.0f);
	glColor3ub(0, 255, 0);
	glVertex3f(0.0f, 10.0f, 10.0f);
	glColor3ub(0, 255, 0);
	glVertex3f(0.0f, 10.0f, 0.0f);
	glColor3ub(255, 255, 255);
	glVertex3f(0.0f, 0.0f, 0.0f);
	//pared azul
	glColor3ub(255, 255, 255);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3ub(0, 0, 255);
	glVertex3f(10.0f, 1.0f, 0.0f);
	glColor3ub(0, 0, 255);
	glVertex3f(10.0f, 1.0f, 10.0f);
	glColor3ub(0, 0, 255);
	glVertex3f(0.0f, 1.0f, 10.0f);
	glEnd();
	
	*/
	//////////////////////////////////////////

	e1.SetObjetos();
	e1.Pintar();

	esc1.Pintar();


	//no borrar esta linea ni poner nada despues
	///Para limpieza de buffers 
	glutSwapBuffers();
}
void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	



	// Esta linea no se borra, hace que cuando le de a algo del tecladome ejecute de nuevo el void main,
	// pero con el cambio efectuado tras el evento del teclado en la variable cambiada
	glutPostRedisplay();
}

void OnTimer(int value) /// Efectua el main con los cambios que haya dentro del OnTimer 
{



	glutTimerFunc(25, OnTimer, 0);
	glutPostRedisplay();
}





















