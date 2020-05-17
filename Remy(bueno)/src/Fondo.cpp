#include "Fondo.h"

void Fondo::SetPlataformas()
{
	Plataforma* aux = new Plataforma(0,20);	//Suelo
	plataformas.agregar(aux);
	aux = new Plataforma(100, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(40, 40,40);
	plataformas.agregar(aux);
	aux = new Plataforma(150, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(160, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(260, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(320, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(350, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(330, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(370, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(390, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(430,40,40);
	plataformas.agregar(aux);
	aux = new Plataforma(490, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(590, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(630, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(550, 60);
	plataformas.agregar(aux);

	
	Queso* auxq = new Queso(20,0);
	quesos.agregar(auxq);
	auxq = new Queso(40, 0);
	quesos.agregar(auxq);
	auxq = new Queso(70, 0);
	quesos.agregar(auxq);
	auxq = new Queso(100, 0);
	quesos.agregar(auxq);
	auxq = new Queso(120, 0);
	quesos.agregar(auxq);


	Trampa* auxt = new Trampa(20, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(60, 20);
	bombas.agregar(auxt);
	auxt = new Trampa(40, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(80, 0);
	bombas.agregar(auxt);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40-12*i, 70);
		vidas.agregar(auxv);
	}


	
}

void Fondo::PintarLvl1() {


	//AQUI SE PINTA LAS PLATAFORMAS

	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();


	//AQUI SE PINTA EL SUELO


	glBegin(GL_POLYGON);										//////////////////////////////////////////////////////////////////////////
	glColor3ub(201, 60, 32);									//(50,0.0,0.1)												(-200,0,0.1)//
	glVertex3f(-50, -0.1, 0.0);									//(50,1,-0.1)											 (-200,1,-0.1)  //
	glColor3ub(201, 60, 32);									//////////////////////////////////////////////////////////////////////////
	glVertex3f(-50, -0.1, -1);
	glColor3ub(201, 60, 32);
	glVertex3f(800, -0.1, -1);
	glColor3ub(201, 60, 32);
	glVertex3f(800, -0.1, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(201, 60, 32);
	glVertex3f(-50, 0.2, 1);
	glColor3ub(201, 60, 32);
	glVertex3f(800, 0.2, 1);
	glColor3ub(201, 60, 32);
	glVertex3f(800, -10, 1);
	glColor3ub(201, 60, 32);
	glVertex3f(-50, -10, 1);
	glEnd();



	//AQUI SE PINTA EL FONDO

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoSalon.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 85,-10 );
	glTexCoord2d(1, 0); glVertex3f(800, 85, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);


	// AQUI SE PINTA EL TECHO

	glBegin(GL_POLYGON);
	glColor3ub(244, 244, 244);
	glVertex3f(-50, 80.1,0.0);
	glColor3ub(244, 244, 244);
	glVertex3f(-50, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(800, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(800, 80.1, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(244, 244, 244);
	glVertex3f(-50, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(800, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(800, 90, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(-50, 90, 1);
	glEnd();


}




