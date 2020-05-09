#include "Interaccion.h"
#include <math.h>


void Interaccion::rebote(Gatitos& g) {

	if (g.GetYPosicion() <= 0)
	{
		g.SetPosicion(g.GetXPosicion(), 0);
		g.SetVelocidad(g.GetXVelocidad(), 0);
	}

}

void Interaccion::rebote(Remy& g) {

	if (g.GetYPosicion() < 0)
	{
		g.SetPosicion(g.GetXPosicion(), 0);
		g.SetVelocidad(g.GetXVelocidad(), 0);
	}

}

void Interaccion::rebote(Remy& g, Fondo& f) {

	//Interaccion::rebote(g, f.Suelo);
	f.plataformas.Rebote(g);
	f.quesos.Rebote(g);
	

}

void Interaccion::rebote(Remy& g, Plataforma& p) {

	if ((g.GetYPosicion() < p.GetYCoordenada() + 1 ) && (g.GetYPosicion() > p.GetYCoordenada() -1) && ( g.GetXPosicion() > p.GetXCoordenada() ) && ( g.GetXPosicion() < p.GetXCoordenada() + p.GetLargo()))
	{
		g.SetPosicion(g.GetXPosicion(), p.GetYCoordenada() + 1);
		g.SetVelocidad(g.GetXVelocidad(), 0);
		
	}
	else
	{

	}

	if ((g.GetYPosicion()+g.GetAltura()-3 > p.GetYCoordenada() - 1) && (g.GetYPosicion()+g.GetAltura()-3 < p.GetYCoordenada() + 1) && (g.GetXPosicion() > p.GetXCoordenada()-2) && (g.GetXPosicion() < p.GetXCoordenada() + p.GetLargo()+2))
	{
		g.SetPosicion(g.GetXPosicion(), p.GetYCoordenada()  -1-g.GetAltura()+3);
		g.SetVelocidad(g.GetXVelocidad(), -0.1);

	}

	if (g.GetXPosicion()+3.5 > p.GetXCoordenada() && g.GetXPosicion() -3.5 < p.GetXCoordenada()+p.GetLargo())
	{
		if((g.GetYPosicion()+g.GetAltura()-5>p.GetYCoordenada()+1 && g.GetYPosicion()+1 > p.GetYCoordenada() + 1) || (g.GetYPosicion()+g.GetAltura()-5 < p.GetYCoordenada() - 1 && g.GetYPosicion()+1< p.GetYCoordenada() -1))
		{
			
		}
		else
		{
			if (g.GetXPosicion() < p.GetXCoordenada() + 5)
			{
				g.SetPosicion(p.GetXCoordenada()-3.5, g.GetYPosicion());
				g.SetVelocidad(g.GetXVelocidad(), g.GetYVelocidad());
			}
			else 
			{
				g.SetPosicion(p.GetXCoordenada()+p.GetLargo()+3.5, g.GetYPosicion());
				g.SetVelocidad(g.GetXVelocidad(), g.GetYVelocidad());
			}
		}
	}


}

bool Interaccion::rebote(Remy& g, Queso& q)
{
	if (abs(g.GetXPosicion() - q.GetX()) < 5.5 && abs(g.GetYPosicion()-q.GetY())<5)
	{
		return true;
	}
	else
		return false;
}

bool Interaccion::rebote(Remy& r, Gatitos& g)
{
	Vector2D res = r.GetPosicion() - g.GetPosicion();
	float modulo = res.Modulo();

	if (((r.GetXPosicion() - g.GetXPosicion()) > -5)&& (r.GetXPosicion()<g.GetXPosicion()) && (r.GetYPosicion() - g.GetYPosicion()) < 5)
	{
		
		r.SetVida(r.GetVida() - 1);
		r.SetPosicion(g.GetXPosicion() - 5, r.GetYPosicion());
		return true;
	}
	else if (((r.GetXPosicion() - g.GetXPosicion()) < +5.7) && (r.GetXPosicion() > g.GetXPosicion()) && (r.GetYPosicion() - g.GetYPosicion()) < 5)
	{

		r.SetVida(r.GetVida() - 1);
		r.SetPosicion(g.GetXPosicion() + 5.7, r.GetYPosicion());
		return true;
	}

	else
		return false;
	
}



