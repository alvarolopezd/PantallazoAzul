#include "Fondo.h"

void Fondo::SetLvl1()
{
	Plataforma* aux = new Plataforma(130, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(170, 40);
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
	aux = new Plataforma(430, 40, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(490, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(590, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(630, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(550, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(730, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(720, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(730, 60);
	plataformas.agregar(aux);
	
	Queso* auxq = new Queso(-10, 21);
	quesos.agregar(auxq);
	auxq = new Queso(340, 61);
	quesos.agregar(auxq);
	auxq = new Queso(460, 41);
	quesos.agregar(auxq);
	auxq = new Queso(560, 61);
	quesos.agregar(auxq);
	auxq = new Queso(740, 61);
	quesos.agregar(auxq);

	Trampa* auxt = new Trampa(-10, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(240, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(380, 61);
	bombas.agregar(auxt);
	auxt = new Trampa(420, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(570, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(560, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(740, 0);
	bombas.agregar(auxt);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40-12*i, 70);
		vidas.agregar(auxv);
	}
}
void Fondo::SetLvl2()
{
	Plataforma* aux = new Plataforma(30, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(50, 40,40);
	plataformas.agregar(aux);
	aux = new Plataforma(110, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(200,20);
	plataformas.agregar(aux);
	aux = new Plataforma(180, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(260, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(260, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(310, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(350, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(380, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(410, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(430, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(450, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(520, 20,40);
	plataformas.agregar(aux);

	Queso* auxq = new Queso(60, 0);
	quesos.agregar(auxq);
	auxq = new Queso(190, 40);
	quesos.agregar(auxq);
	auxq = new Queso(270, 61);
	quesos.agregar(auxq);
	auxq = new Queso(390, 40);
	quesos.agregar(auxq);
	auxq = new Queso(530, 0);
	quesos.agregar(auxq);

	Trampa* auxt = new Trampa(40, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(50, 30);
	bombas.agregar(auxt);
	auxt = new Trampa(125, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(155, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(185, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(155, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(260, 21);
	bombas.agregar(auxt);
	auxt = new Trampa(260, 61);
	bombas.agregar(auxt);
	auxt = new Trampa(330, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(375, 51);
	bombas.agregar(auxt);
	auxt = new Trampa(375, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(405, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(405, 51);
	bombas.agregar(auxt);
	auxt = new Trampa(430, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(450, 21);
	bombas.agregar(auxt);
	auxt = new Trampa(470, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(470, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(520, 10);
	bombas.agregar(auxt);
	auxt = new Trampa(520, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(600, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(600, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(620, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(620, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(640, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(640, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(660, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(660, 0);
	bombas.agregar(auxt);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40 - 12 * i, 70);
		vidas.agregar(auxv);
	}
}
void Fondo::SetLvl3()
{
	Plataforma* aux = new Plataforma(40, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(40, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(80, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(120, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(180, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(170, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(190, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(240, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(220, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(260, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(300, 20,40);
	plataformas.agregar(aux);
	aux = new Plataforma(360, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(390, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(390, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(390, 60);
	plataformas.agregar(aux);
	aux = new Plataforma(260, 40);
	plataformas.agregar(aux);
	aux = new Plataforma(530, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(590, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(620, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(720, 20);
	plataformas.agregar(aux);
	aux = new Plataforma(760, 20);
	plataformas.agregar(aux);


	Trampa* auxt = new Trampa(70, 31);
	bombas.agregar(auxt);
	auxt = new Trampa(70, 51);
	bombas.agregar(auxt);
	auxt = new Trampa(160, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(170, 21);
	bombas.agregar(auxt);
	auxt = new Trampa(180, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(180, 51);
	bombas.agregar(auxt);
	auxt = new Trampa(200, 61);
	bombas.agregar(auxt);
	auxt = new Trampa(220, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(280, 51);
	bombas.agregar(auxt);
	auxt = new Trampa(280, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(290, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(300, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(300, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(320, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(350, 31);
	bombas.agregar(auxt);
	auxt = new Trampa(390, 41);
	bombas.agregar(auxt);
	auxt = new Trampa(385, 38);
	bombas.agregar(auxt);
	auxt = new Trampa(430, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(440,11);
	bombas.agregar(auxt);
	auxt = new Trampa(450, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(470, 21);
	bombas.agregar(auxt);
	auxt = new Trampa(480, 21);
	bombas.agregar(auxt);
	auxt = new Trampa(490, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(500, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(510, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(590, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(590, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(610, 40);
	bombas.agregar(auxt);
	auxt = new Trampa(640, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(640, 0);
	bombas.agregar(auxt);
	auxt = new Trampa(680, 31);
	bombas.agregar(auxt);
	auxt = new Trampa(750, 25);
	bombas.agregar(auxt);
	auxt = new Trampa(750, 56);
	bombas.agregar(auxt);

	Queso* auxq = new Queso(50, 61);
	quesos.agregar(auxq);
	auxq = new Queso(180, 61);
	quesos.agregar(auxq);
	auxq = new Queso(460, 0);
	quesos.agregar(auxq);
	auxq = new Queso(610, 0);
	quesos.agregar(auxq);
	auxq = new Queso(750, 41);
	quesos.agregar(auxq);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40 - 12 * i, 70);
		vidas.agregar(auxv);
	}
}
void Fondo::SetLvl4()
{
	Plataforma* aux = new Plataforma(0, 20, 25);
	plataformas.agregar(aux);
	aux = new Plataforma(40, 30, 25);
	plataformas.agregar(aux);
	aux = new Plataforma(80, 40, 25);
	plataformas.agregar(aux);
	aux = new Plataforma(120, 50, 25);
	plataformas.agregar(aux);
	aux = new Plataforma(160, 60, 25);
	plataformas.agregar(aux);

	Queso* auxq = new Queso(22, 21);
	quesos.agregar(auxq);
	auxq = new Queso(62, 31);
	quesos.agregar(auxq);
	auxq = new Queso(102, 41);
	quesos.agregar(auxq);
	auxq = new Queso(142, 51);
	quesos.agregar(auxq);
	auxq = new Queso(182, 61);
	quesos.agregar(auxq);
	auxq = new Queso(310, 0);		//Dificil pero innecesario
	quesos.agregar(auxq);

	Trampa* auxt = new Trampa(25, 11);
	bombas.agregar(auxt);
	auxt = new Trampa(25, 0);
	bombas.agregar(auxt);

	for (int i = 1; i <= 4; i++)
	{
		Vida* auxv = new Vida(40 - 12 * i, 70);
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
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(800, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(800, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, -10, -10);
	glEnd();

	//AQUI SE PINTA EL FONDO

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoSalon.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(800, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
}

void Fondo::PintarLvl2()
{
	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();
	//AQUI SE PINTA EL FONDO
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoDormitorio.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(800, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
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
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(800, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(800, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, -10, -10);
	glEnd();
}
void Fondo::PintarLvl3()
{
	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();
	//AQUI SE PINTA EL FONDO
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoCocina.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(800, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(800, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
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
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(800, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(800, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(880, -10, -10);
	glEnd();
}
void Fondo::PintarLvl4()
{
	plataformas.Dibuja();
	quesos.Dibuja();
	bombas.Dibuja();
	vidas.Dibuja();
	//AQUI SE PINTA EL FONDO
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/FondoFinal.png").id);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glTexCoord2d(0, 0); glVertex3f(-80, 87, -10);
	glTexCoord2d(1, 0); glVertex3f(214, 87, -10);
	glTexCoord2d(1, 1); glVertex3f(214, -10, -10);
	glTexCoord2d(0, 1); glVertex3f(-80, -10, -10);
	glEnd();
	glEnable(GL_LIGHTING);
	glDisable(GL_TEXTURE_2D);
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
	//AQUI SE PINTA LA PARED FINAL
	glBegin(GL_POLYGON);
	glColor3ub(20, 32, 64);
	glVertex3f(214, -10, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(214, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(294, 90, -10);
	glColor3ub(20, 32, 64);
	glVertex3f(294, -10, -10);
	glEnd();
}
void Fondo::Mueve(float _t)
{
	vidas.Mueve(_t);
	bombas.Mueve();
}