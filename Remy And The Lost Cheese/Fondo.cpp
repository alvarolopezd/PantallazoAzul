#include "Fondo.h"

void Fondo::SetPlataformas()
{
	p1.SetCoordenadas(-160, 20);
	p2.SetCoordenadas(-200, 40);
	p3.SetCoordenadas(-220, 40);
	p4.SetCoordenadas(-160, 60);
	q1.SetPosicion(-170, 65);
	p5.SetCoordenadas(-260, 20);
	p6.SetCoordenadas(-330, 20);
	p7.SetCoordenadas(-350, 40);
	p8.SetCoordenadas(-330, 60);
	q2.SetPosicion(-340, 65);
	p9.SetCoordenadas(-370, 60);
	p10.SetCoordenadas(-390, 20);
	p11.SetCoordenadas(-430, 40);
	p12.SetCoordenadas(-450, 40);
	q3.SetPosicion(-420, 5);
	p13.SetCoordenadas(-490, 20);
	p14.SetCoordenadas(-590, 40);
	p15.SetCoordenadas(-630, 20);
	p16.SetCoordenadas(-550, 60);
	q4.SetPosicion(-560, 65);
	



}

void Fondo::PintarLvl1() {


	//AQUI SE PINTA LAS PLATAFORMAS

	p1.Pintar();
	p2.Pintar();
	p3.Pintar();
	p4.Pintar();
	p5.Pintar();
	p6.Pintar();
	p7.Pintar();
	p8.Pintar();
	p9.Pintar();
	p10.Pintar();
	p11.Pintar();
	p12.Pintar();
	p13.Pintar();
	p14.Pintar();
	p15.Pintar();
	p16.Pintar();

	q1.Dibuja();
	q2.Dibuja();
	q3.Dibuja();
	q4.Dibuja();

	t1.Dibuja();
	



	//AQUI SE PINTA EL SUELO

	glBegin(GL_POLYGON);										//////////////////////////////////////////////////////////////////////////
	glColor3ub(201, 60, 32);									//(50,0.0,0.1)												(-200,0,0.1)//
	glVertex3f(50, 0.0, 0.1);									//(50,1,-0.1)											 (-200,1,-0.1)  //
	glColor3ub(201, 60, 32);									//////////////////////////////////////////////////////////////////////////
	glVertex3f(50, 1, -0.1);
	glColor3ub(201, 60, 32);
	glVertex3f(-800, 1, -0.1);
	glColor3ub(201, 60, 32);
	glVertex3f(-800, 0, 0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(201, 60, 32);
	glVertex3f(50, 1, -0.1);
	glColor3ub(201, 60, 32);
	glVertex3f(-800, 1, -0.1);
	glColor3ub(201, 60, 32);
	glVertex3f(-800, 1, -10);
	glColor3ub(201, 60, 32);
	glVertex3f(50, 1, -10);
	glEnd();





	//AQUI SE PINTA EL FONDO

	glBegin(GL_POLYGON);
	glColor3ub(12, 183, 242);
	glVertex3f(50, -20, -10);
	glColor3ub(12, 183, 242);
	glVertex3f(50, -20, 90);
	glColor3ub(12, 183, 242);
	glVertex3f(-800, -20, 90);
	glColor3ub(12, 183, 242);
	glVertex3f(-800, -20, -10);
	glEnd();


	// AQUI SE PINTA EL TECHO

	glBegin(GL_POLYGON);
	glColor3ub(244, 244, 244);
	glVertex3f(50, 0.0, 80.1);
	glColor3ub(244, 244, 244);
	glVertex3f(50, 1, 79.9);
	glColor3ub(244, 244, 244);
	glVertex3f(-800, 1, 79.9);
	glColor3ub(244, 244, 244);
	glVertex3f(-800, 0.0, 80.1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(244, 244, 244);
	glVertex3f(50, 1, 79.9);
	glColor3ub(244, 244, 244);
	glVertex3f(-800, 1, 79.9);
	glColor3ub(244, 244, 244);
	glVertex3f(-800, 1, 90);
	glColor3ub(244, 244, 244);
	glVertex3f(50, 1, 90);
	glEnd();

	//ABUJERO NEGRILLO SIEMPRE SUCIO
	glBegin(GL_POLYGON);
	glColor3ub(255, 150, 150);
	glVertex3f(50, -13, -5);
	glColor3ub(255, 150, 150);
	glVertex3f(27, -13, -5);
	glColor3ub(255, 150, 150);
	glVertex3f(27, -13, 90);
	glColor3ub(255, 150, 150);
	glVertex3f(50, -13, 90);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(255, 150, 150);
	glVertex3f(50, 15, -5);
	glColor3ub(255, 150, 150);
	glVertex3f(32.5, 15, -5);
	glColor3ub(255, 150, 150);
	glVertex3f(32.5, 15, 90);
	glColor3ub(255, 150, 150);
	glVertex3f(50, 15, 90);
	glEnd();

	glTranslatef(30,-1,8);
	glRotatef(90, 1, 0, 0);
	glRotatef(80, 0, 1, 0);
	glColor3ub(255, 0, 0);
	glutSolidTorus(1, 13, 50, 50);
	glRotatef(-80, 0, 1, 0);
	glRotatef(-90, 1, 0, 0);
	glTranslatef(-30,1, -8);




}