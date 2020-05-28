#include "Coordinador.h"

Coordinador::Coordinador()
{
	estado = INICIO;
	ETSIDI::playMusica("sonidos/avengers2.mp3", TRUE);

}
Coordinador::~Coordinador()
{

}

void Coordinador::Inicializa()
{
	//mundo.Inicializa();
}

void Coordinador::Dibuja()
{
	if (estado == INICIO)
	{
		//SPRITE INTRO
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Intro1.png").id);
		glDisable(GL_LIGHTING);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glTexCoord2d(0, 0); glVertex3f(-8, 5, -20);
		glTexCoord2d(1, 0); glVertex3f(8, 5, -20);
		glTexCoord2d(1, 1); glVertex3f(8, -5, -20);
		glTexCoord2d(0, 1); glVertex3f(-8, -5, -20);
		glEnd();
		glEnable(GL_LIGHTING);
		glDisable(GL_TEXTURE_2D);
	}
	else if (estado == JUEGO)
	{
		mundo.Dibuja();
	}
	else if (estado == GAMEOVER)
	{
		//SPRITE GAMEOVER
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/GameOver.png").id);
		glDisable(GL_LIGHTING);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glTexCoord2d(0, 0); glVertex3f(-8, 5, -20);
		glTexCoord2d(1, 0); glVertex3f(8, 5, -20);
		glTexCoord2d(1, 1); glVertex3f(8, -5, -20);
		glTexCoord2d(0, 1); glVertex3f(-8, -5, -20);
		glEnd();
		glEnable(GL_LIGHTING);
		glDisable(GL_TEXTURE_2D);
	}
	else if (estado == EXITO)
	{
		//SPRITE EXITO
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/GameComplete.png").id);
		glDisable(GL_LIGHTING);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glTexCoord2d(0, 0); glVertex3f(-8, 5, -20);
		glTexCoord2d(1, 0); glVertex3f(8, 5, -20);
		glTexCoord2d(1, 1); glVertex3f(8, -5, -20);
		glTexCoord2d(0, 1); glVertex3f(-8, -5, -20);
		glEnd();
		glEnable(GL_LIGHTING);
		glDisable(GL_TEXTURE_2D);
	}
	else if (estado == PAUSA)
	{

	}
}
void Coordinador::Tecla(unsigned char key)
{
	if (estado == INICIO)
	{
		if (key == ' ')
		{
			ETSIDI::stopMusica();
			mundo.Inicializa();
			estado = JUEGO;
		}
		if (key == 's' || key == 'S')
			exit(0);
	}
	else if (estado == JUEGO)
	{
		mundo.Tecla(key);
	}
	else if (estado == GAMEOVER)
	{
		if (key == ' ')
		{
			estado = INICIO;
		}
		if (key == 's' || key == 'S')
			exit(0);
	}
	else if (estado == EXITO)
	{
		if (key == ' ')
		{
			estado = INICIO;
		}
		if (key == 's' || key == 'S')
			exit(0);
	}
	else if (estado == JUEGO)
	{
		if (key == 'p' || key == 'P')
		{
			estado = INICIO;
		}
	}
}
void Coordinador::Mueve()
{
	if (estado == JUEGO)
	{
		mundo.Mueve();
		if (mundo.remy.GetXPosicion() >= 800 && mundo.remy.GetQuesos() <= 0)
		{
			if (!mundo.CargarNivel())
			{
				estado = EXITO;
			}
		}
		if (mundo.GetVida() <= 0)
		{
			ETSIDI::play("sonidos/gameover.mp3");
			estado = GAMEOVER;
		}
	}
}
void Coordinador::teclaEspecial(int key)
{
	mundo.teclaEspecial(key);
}
void Coordinador::teclaArriba(int key)
{
	mundo.teclaArriba(key);
}
