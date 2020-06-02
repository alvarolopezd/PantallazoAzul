#include "Trampa.h"
#include "glut.h"

Trampa::Trampa(float _x,float _y):sprite("Imagenes/bomba.png",1,1,50),Boom("Imagenes/bomba_explosion.png",13,1,50)
{
	posicion.SetCoordenadas(_x, _y);

	sprite.setSize(5, 5);
	sprite.setCenter(2.5, 0);

	Boom.setSize(5, 5);
	Boom.setCenter(2.5, 0);


}


void Trampa::SetCoordenadas(float _x, float _y)
{
	posicion.SetCoordenadas(_x, _y);
}

int Trampa::GetExplosion()
{
	return explosion;
}


void Trampa::Dibuja()
{
	glTranslatef(posicion.GetX(),posicion.GetY(), 0);
	if(explosion==0)
	{
		sprite.draw();
	}
	else if(explosion==1)
	{
		Boom.draw();
		if (Boom.getState() > 11)
		{
			Boom.setState(0);
			explosion = 0;
		}
	}
	
	glTranslatef(-posicion.GetX(), -posicion.GetY(), 0);
}

float Trampa::GetX()
{
	return posicion.GetX();
}

float Trampa::GetY()
{
	return posicion.GetY();
}

void Trampa::SetExplosion(int _exp)
{
	explosion = _exp;
}

void Trampa::Mueve()
{
	Boom.loop();
}