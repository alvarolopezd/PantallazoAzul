#pragma once
#include "Enemigo.h"
#include "Cono.h"
#include "Cilindro.h"
#include "glut.h"

// INCLUIR ESFERA.H, CILINDRO.H...

class Escobas :public Enemigo
{

private:

	// OBJETOS PARA PINTAR: DOS CONOS, DOS CILINDROS, UN PLANO
	Cono cono1,cono2;
	Cilindro cil1, cil2, cil3;

public:
	void SetObjetos();
	void Mover(unsigned char _key);
	void Atacar();
	void Pintar(); 


};

// ESTO EN EL CPP

void Escobas::SetObjetos()
{
	cono1.SetAtributos(GetXPosicion(), GetYPosicion(), 2, 5.6, 15, 20, 150, 150, 0);
	cono2.SetAtributos((GetXPosicion() + 10.5), GetYPosicion(), 2, 5.6, 15, 20, 150, 150, 0);
	cil1.SetAtributos((GetXPosicion() + 5.25), GetYPosicion(), 1, 5.25, 5.25, 5.6, 50, 50, 150, 150, 0);
	cil2.SetAtributos(GetXPosicion()+5.25, (GetYPosicion() + 5.6), 1, 5.25, 5.25, 2.7, 50, 50, 64, 32, 0);
}

// SET CILINDRO


void Escobas::Pintar()
{
	glDisable(GL_LIGHTING);
	glTranslatef(cono1.GetX(), 0, cono1.GetY());
	glColor3ub(cono1.GetRojo(), cono1.GetVerde(), cono1.GetAzul());
	glutSolidCone(cono1.GetBase(), cono1.GetHeight(), cono1.GetSlices(), cono1.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	glTranslatef(-cono1.GetX(), 0, -cono1.GetY());
	
	glTranslatef(cono2.GetX(), 0, cono2.GetY());
	glColor3ub(cono2.GetRojo(), cono2.GetVerde(), cono2.GetAzul());
	glutSolidCone(cono2.GetBase(), cono2.GetHeight(), cono2.GetSlices(), cono2.GetStacks());
	glTranslatef(-cono2.GetX(), 0, -cono2.GetY());
	
	glTranslatef(cil1.GetX(), 0,cil1.GetY());
	glColor3ub(cil1.GetRojo(), cil1.GetVerde(), cil1.GetAzul());
	GLUquadricObj* p1 = gluNewQuadric();
	gluCylinder(p1, cil1.GetBase(), cil1.GetTop(), cil1.GetHeight(), cil1.GetSlices(), cil1.GetStacks());
	glTranslatef(-cil1.GetX(), 0, -cil1.GetY());

	glTranslatef(cil2.GetX(),0, cil2.GetY());
	glColor3ub(cil2.GetRojo(), cil2.GetVerde(), cil2.GetAzul());
	GLUquadricObj* p2 = gluNewQuadric();
	gluCylinder(p2, cil2.GetBase(), cil2.GetTop(), cil2.GetHeight(), cil2.GetSlices(), cil2.GetStacks());
	glTranslatef(-cil2.GetX(), 0, -cil2.GetY());



	glBegin(GL_POLYGON);
	glColor3ub(64, 32, 0);
	glVertex3f(GetXPosicion()+5.25, 0.0f, GetYPosicion()+5.6);
	glColor3ub(64, 32, 0);
	glVertex3f(GetXPosicion()+7.25, 0.0f, GetYPosicion()+5.6);
	glColor3ub(64, 32, 0);
	glVertex3f(GetXPosicion()-2.75, 0.0f, GetYPosicion()+25.6);
	glEnd();

}

void Escobas::Mover(unsigned char _key)
{
	float x, z;
	x = GetXPosicion();
	z = GetYPosicion();
	switch (_key)
	{
	case 'd':
	case 'D':
		x--;
		break;
	case 'a':
	case 'A':
		x++;
		break;

	default:
		break;
	}
	SetPosicion(x, z);
}
