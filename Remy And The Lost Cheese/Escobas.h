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
	Cilindro cil1, cil2;

public:
	void SetCono();
	void SetCilindro();
	Cono GetCono();
	Cilindro GetCilindro();
	void Mover();
	void Atacar();
	void Pintar(); 


};

// ESTO EN EL CPP

void Escobas::SetCono()
{
	cono1.SetAtributos(0, 0, 2,2, 15, 20, 255, 0, 255);
	//cono2.SetAtributos(15, )

}

// SET CILINDRO


void Escobas::Pintar()
{
	glTranslatef(cono1.GetX(), cono1.GetY(),0);
	glutSolidCone(cono1.GetBase(), cono1.GetHeight(), cono1.GetSlices(), cono1.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	
	//DIBUJAR TODOS LOS OBJETOS

}
