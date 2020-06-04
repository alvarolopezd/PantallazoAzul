#include "Skinner.h"

Skinner::Skinner(): Ataque("Imagenes/Skinner_Ataque.png", 12, 1, 75), Quieto("Imagenes/Skinner_Quieto.png", 6, 2, 125), Salto("Imagenes/Skinner_Salto.png", 1, 1, 50), Muerto("Imagenes/Skinner_Muerto.png", 10, 1, 200)
{
	vida = 25;
	atacar = 0;
	SetPosicion(10, 21);
	SetVelocidad(0, 0);
	SetAceleracion(0, -100);

	Muerto.setCenter(13, 0);
	Muerto.setSize(26, 24);
	Muerto.setState(0, false);

	Ataque.setCenter(13, 1);
	Ataque.setSize(26, 24);

	Quieto.setCenter(9, 1.9);
	Quieto.setSize(18, 24);

	Salto.setCenter(12, 1.9);
	Salto.setSize(24, 24);
}

void Skinner::Mover(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;

	Ataque.loop();
	Salto.loop();
	Muerto.loop();
	Quieto.loop();
}
void Skinner::Pintar()
{
	glPushMatrix();
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.55f);

	if (velocidad.GetX() > 0.01 && vida > 0)
	{
		Ataque.flip(false, false);
		Salto.flip(false, false);
	}
	else if (velocidad.GetX() < -0.01 && vida > 0)
	{
		Ataque.flip(true, false);
		Salto.flip(true, false);
	}

	if (velocidad.GetX() < 0.01 && velocidad.GetX() > -0.01 && velocidad.GetY() == 0 && vida > 0 && atacar==0)
	{
		Quieto.draw();
		Ataque.setState(0, false);
	}
	if (velocidad.GetY() != 0 && vida > 0)
	{
		Salto.draw();
	}
	if (vida == 0)
	{
		Muerto.draw();
		if (Muerto.getState() >= 9)
		{
			Muerto.setState(9, true);
		}
	}
	if (atacar == 1 && vida > 0)
	{
		Ataque.draw();
		if (Ataque.getState() >= 11)
		{
			Ataque.setState(0, false);
			
			atacar = 0;
		}
	}

	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.55f);
	glPopMatrix();
}

void Skinner::SetAtaque(int estado)
{
	atacar = estado;
}