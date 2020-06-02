#include "Skinner.h"

Skinner::Skinner(): Ataque("Imagenes/Skinner_Ataque.png", 12, 1, 50), Quieto("Imagenes/Skinner_Quieto.png", 6, 2, 50), Salto("Imagenes/Skinner_Salto.png", 1, 1, 50), Muerto("Imagenes/Skinner_Muerto.png", 14, 1, 50)
{
	vida = 25;
	SetPosicion(100, 100);

	Muerto.setCenter(5, 0);
	Muerto.setSize(10, 7);

	Ataque.setCenter(5, 1);
	Ataque.setSize(10, 20);

	Quieto.setCenter(5, 1.9);
	Quieto.setSize(10, 20);

	Salto.setCenter(5, 1.9);
	Salto.setSize(10, 20);
}

void Skinner::Mover(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
	Ataque.loop();
	Salto.loop();
	Muerto.loop();
	Quieto.loop();
	//cout << posicion.x << "\n";
	//cout << quesos << "\n";
}
void Skinner::Pintar()
{
	glPushMatrix();
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.5f);
	glColor3f(1.0f, 1.0f, 1.0f);

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

	if (velocidad.GetX() < 0.01 && velocidad.GetX() > -0.01 && velocidad.GetY() == 0 && vida > 0)
	{
		Quieto.draw();
	}
	if (velocidad.GetY() != 0 && vida > 0)
	{
		Salto.draw();
	}
	if (vida <= 0)
	{
		Muerto.draw();
	}
	if (atacar == 1)
	{
		Ataque.draw();
		if (Ataque.getState() > 11)
		{
			Ataque.setState(0, false);
			atacar = 0;
		}
	}

	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5f);
	glPopMatrix();
}

void Skinner::SetAtaque(int estado)
{
	atacar = estado;
}