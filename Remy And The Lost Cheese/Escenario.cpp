#include "Escenario.h"
#include "glut.h"

void Escenario::Pintar() {

	//AQUI SE PINTA EL SUELO

	glBegin(GL_POLYGON);										//////////////////////////////////////////////////////////////////////////
	glColor3ub(178, 255, 182);									//(50,0.0,0.1)												(-200,0,0.1)//
	glVertex3f(50, 0.0,0.1);									//(50,1,-0.1)											 (-200,1,-0.1)  //
	glColor3ub(178, 255, 182);									//////////////////////////////////////////////////////////////////////////
	glVertex3f(50, 1, -0.1);
	glColor3ub(178, 255, 182);
	glVertex3f(-200, 1, -0.1);
	glColor3ub(178, 255, 182);
	glVertex3f(-200,0,0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(189, 236, 182);
	glVertex3f(50, 1, -0.1);
	glColor3ub(189, 236, 182);
	glVertex3f(-200, 1, -0.1);
	glColor3ub(189, 236, 182);
	glVertex3f(-200, 1, -10);
	glColor3ub(189, 236, 182);
	glVertex3f(50, 1, -10);
	glEnd();

	



	//AQUI SE PINTA EL FONDO

	glBegin(GL_POLYGON);
	glColor3ub(12, 183, 242);
	glVertex3f(50, -10, -5);
	glColor3ub(12, 183, 242);
	glVertex3f(50, -10, 85);
	glColor3ub(12, 183, 242);
	glVertex3f(-200, -10, 85);
	glColor3ub(12, 183, 242);
	glVertex3f(-200, -10, -5);
	glEnd();


	// AQUI SE PINTA EL TECHO

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex3f(50, 0.0, 80.1);
	glColor3ub(0, 255, 255);
	glVertex3f(50, 1, 79.9);
	glColor3ub(0, 255, 0);
	glVertex3f(-200, 1, 79.9);
	glColor3ub(255, 0, 255);
	glVertex3f(-200, 0.0, 80.1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0, 255, 0);
	glVertex3f(50, 1, 79.9);
	glColor3ub(0, 255, 0);
	glVertex3f(-200, 1, 79.9);
	glColor3ub(0, 255, 0);
	glVertex3f(-200, 1, 90);
	glColor3ub(0, 255, 0);
	glVertex3f(50, 1, 90);
	glEnd();



	//AQUI SE PINTA LAS PLATAFORMAS


}