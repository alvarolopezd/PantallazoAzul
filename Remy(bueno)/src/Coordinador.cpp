#include <iostream>
using namespace std;
#include "Coordinador.h"

Coordinador::Coordinador()
{
	estado = HISTORIA;
	historia = 1;
	ETSIDI::playMusica("sonidos/HISTORIA Sea of Thieves OST (The Voyage of the Secret Shrine).mp3", TRUE);
}
Coordinador::~Coordinador()
{

}

void Coordinador::Inicializa()
{

}

void Coordinador::Dibuja()
{
	if (estado == HISTORIA && historia == 1)
	{
		//SPRITE INTRO
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Historia1.png").id);
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
	else if (estado == HISTORIA && historia == 2)
	{
		//SPRITE INTRO
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Historia2.png").id);
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
	else if (estado == HISTORIA && historia == 3)
	{
		//SPRITE INTRO
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Historia3.png").id);
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
	else if (estado == HISTORIA && historia == 4)
	{
		//SPRITE INTRO
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Historia4.png").id);
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
	else if (estado == HISTORIA && historia == 5)
	{
		//SPRITE INTRO
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Historia5.png").id);
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
	else if (estado == DIFICULTAD)
	{
		//SPRITE DIFICULTAD
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Dificultad.png").id);
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
	else if (estado == PAUSA)
	{
		//SPRITE PAUSA
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/Pausa.png").id);
		glDisable(GL_LIGHTING);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glTexCoord2d(0, 0); glVertex3f(-4.2, 3, -10);
		glTexCoord2d(1, 0); glVertex3f(-1, 3, -10);
		glTexCoord2d(1, 1); glVertex3f(-1, 1, -10);
		glTexCoord2d(0, 1); glVertex3f(-4.2, 1, -10);
		glEnd();
		glEnable(GL_LIGHTING);
		glDisable(GL_TEXTURE_2D);
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
}
void Coordinador::Tecla(unsigned char key)
{
	if (estado == HISTORIA)
	{
		if (key == 's' || key == 'S')
		{
			ETSIDI::playMusica("sonidos/avengerscorto.mp3");
			estado = INICIO;
			key = 'L';			//LIMPIA EL BUFFER DE TECLADO
		}
	}
	if (estado == INICIO)
	{
		if (key == ' ')
		{
			mundo.Inicializa();
			estado = DIFICULTAD;
		}
		if (key == 's' || key == 'S')
			exit(0);
	}
	else if (estado == DIFICULTAD)
	{
		if (key == '1')
		{
			mundo.SetVidas(1);
			estado = JUEGO;
		}
		if (key == '2')
		{
			mundo.SetVidas(2);
			estado = JUEGO;
		}
		if (key == '3')
		{
			mundo.SetVidas(3);
			estado = JUEGO;
		}
		if (key == '4')
		{
			mundo.SetVidas(4);
			estado = JUEGO;
		}
		if (key == 'H')				//VIDAS PARA PROBAR LOS NIVELES EN "MODO DEBUG"
		{
			mundo.SetVidas(15);
			estado = JUEGO;
		}
	}
	else if (estado == JUEGO && (key == 'p' || key == 'P'))
	{
		estado = PAUSA;
	}
	else if (estado == JUEGO)
	{
		mundo.Tecla(key);
	}
	else if (estado == PAUSA)
	{
		if (key == ' ')
		{
			estado = JUEGO;
		}
		if (key == 's' || key == 'S')
			exit(0);
	}
	else if (estado == GAMEOVER)
	{
		if (key == ' ')
		{
			mundo.nivel = mundo.checkpoint;
			estado = INICIO;
		}
		if (key == 'r' || key == 'R')
		{
			mundo.checkpoint = -1;
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
}
void Coordinador::Mueve()
{
	if (estado == JUEGO)
	{
		mundo.Mueve();

		if ((mundo.remy.GetXPosicion() >= 787 && mundo.remy.GetXPosicion() <= 790 && mundo.remy.GetYPosicion() == 0 /*&& mundo.remy.GetQuesos() >= 5*/) || (mundo.nivel == 4 && mundo.remy.GetXPosicion() >= 199 && mundo.remy.GetXPosicion() <= 202 && mundo.remy.GetYPosicion() == 0 && mundo.remy.GetQuesos() >= 5))
		{
			if (!mundo.CargarNivel())
			{
				estado = EXITO;
			}
		}
		if (mundo.GetVida() <= 0)
		{
			mundo.checkpoint = mundo.nivel;
			estado = GAMEOVER;
			ETSIDI::play("sonidos/gameover.mp3");
		}
	}
}
void Coordinador::teclaEspecial(int key)
{
	if (estado == HISTORIA)
	{
		if (key == GLUT_KEY_RIGHT && historia != 5)
		{
			historia++;
			key = 'L';			//LIMPIA EL BUFFER DE TECLADO
		}
		if (key == GLUT_KEY_LEFT && historia != 1)
		{
			historia--;
		}
		if (key == GLUT_KEY_RIGHT && historia == 5)
		{
			ETSIDI::playMusica("sonidos/avengerscorto.mp3");
			estado = INICIO;
			key = 'L';			//LIMPIA EL BUFFER DE TECLADO
		}
	}
	if (estado == INICIO && key == GLUT_KEY_LEFT)
	{
		historia = 1;
		estado = HISTORIA;
	}
	else if (estado == JUEGO)
		mundo.teclaEspecial(key);
}
void Coordinador::teclaArriba(int key)
{
	mundo.teclaArriba(key);
}
