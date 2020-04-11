#pragma once
#include "Plataforma.h"
#include "glut.h"

class Fondo
{
private:
	// INCLUIR CLASES :MESA, PLATAFORMAS, QUESOS, CUCHILLOS, TECHO, FONDO Y SUELO
	// Mesa mesa2lv1
	Plataforma p1, p2, p3, p4,p5,p6,p7,p8;

public:

	void SetPlataformas();
	void PintarLvl1();


};



void Fondo::SetPlataformas()
{
	p1.SetCoordenadas(-10, 20);
	p2.SetCoordenadas(-50, 40);
	p3.SetCoordenadas(-70, 60);
	p4.SetCoordenadas(-80, 20);
	p5.SetCoordenadas(-90, 40);
	p6.SetCoordenadas(-100, 60);

}

void Fondo::PintarLvl1() {

	//AQUI SE PINTA EL SUELO

	glBegin(GL_POLYGON);										//////////////////////////////////////////////////////////////////////////
	glColor3ub(178, 255, 182);									//(50,0.0,0.1)												(-200,0,0.1)//
	glVertex3f(50, 0.0, 0.1);									//(50,1,-0.1)											 (-200,1,-0.1)  //
	glColor3ub(178, 255, 182);									//////////////////////////////////////////////////////////////////////////
	glVertex3f(50, 1, -0.1);
	glColor3ub(178, 255, 182);
	glVertex3f(-200, 1, -0.1);
	glColor3ub(178, 255, 182);
	glVertex3f(-200, 0, 0.1);
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
	
	p1.Pintar();
	p2.Pintar();
	p3.Pintar();
	p4.Pintar();
	p5.Pintar();
	p6.Pintar();
	
}
