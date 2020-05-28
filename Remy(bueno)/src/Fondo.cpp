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

	//AQUI SE PINTA LA PARED DEL PRINCIPIO
	
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-150, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, 1);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, -10, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, -10);
	glColor3ub(20, 60, 32);
	glVertex3f(-80, 90, 1);
	glEnd();

	//AQUI SE PINTA LA PARED LVL1 -> LVL2

	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(798, -10, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(798, 90, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(805, 90, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(805, -10, -9);
	glEnd();
	
	//AQUI SE PINTA LA PARED LVL2 -> LVL3

	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(1678, -10, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(1678, 90, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(1685, 90, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(1685, -10, -9);
	glEnd();

	//AQUI SE PINTA LA PARED LVL3 -> LVL4

	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(2558, -10, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(2558, 90, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(2565, 90, -9);
	glColor3ub(20, 32, 64);
	glVertex3f(2565, -10, -9);
	glEnd();

	//AQUI SE PINTA EL SUELO

	glBegin(GL_POLYGON);										//////////////////////////////////////////////////////////////////////////
	glColor3ub(201, 60, 32);									//(50,0.0,0.1)												(-200,0,0.1)//
	glVertex3f(-80, -0.1, 0.0);									//(50,1,-0.1)											 (-200,1,-0.1)  //
	glColor3ub(201, 60, 32);									//////////////////////////////////////////////////////////////////////////
	glVertex3f(-80, -0.1, -1);
	glColor3ub(201, 60, 32);
	glVertex3f(2560, -0.1, -1);
	glColor3ub(201, 60, 32);
	glVertex3f(2560, -0.1, 0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(201, 60, 32);
	glVertex3f(-80, 0.50, 1);
	glColor3ub(201, 60, 32);
	glVertex3f(2560, 0.50, 1);
	glColor3ub(201, 60, 32);
	glVertex3f(2560, -10, 1);
	glColor3ub(201, 60, 32);
	glVertex3f(-80, -10, 1);
	glEnd();

	//AQUI SE PINTA EL FONDO

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoSalon.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 85, -10);
	glTexCoord2d(1, 0); glVertex3f(800, 85, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);

	// AQUI SE PINTA EL TECHO

	glBegin(GL_POLYGON);
	glColor3ub(244, 244, 244);
	glVertex3f(-80, 80.1, 0.0);
	glColor3ub(244, 244, 244);
	glVertex3f(-80, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(2560, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(2560, 80.1, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(244, 244, 244);
	glVertex3f(-80, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(2560, 79.9, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(2560, 90, 1);
	glColor3ub(244, 244, 244);
	glVertex3f(-80, 90, 1);
	glEnd();
}

void Fondo::PintarLvl2()
{
	//AQUI SE PINTA EL FONDO

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoDormitorio.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(800, 85, -10);
	glTexCoord2d(1, 0); glVertex3f(1680, 85, -10);
	glTexCoord2d(1, 1); glVertex3f(1680, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(800, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}
void Fondo::PintarLvl3()
{
	//AQUI SE PINTA EL FONDO

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoCocina.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(1680, 85, -10);
	glTexCoord2d(1, 0); glVertex3f(2560, 85, -10);
	glTexCoord2d(1, 1); glVertex3f(2560, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(1680, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}

void Fondo::Mueve(float _t)
{
	vidas.Mueve(_t);
}


