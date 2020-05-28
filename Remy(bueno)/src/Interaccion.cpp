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

	if (g.GetYPosicion() < 0)						//COLISION CON EL SUELO
	{
		g.SetPosicion(g.GetXPosicion(), 0);
		g.SetVelocidad(g.GetXVelocidad(), 0);
	}
	else if (g.GetYPosicion() > 68)					//COLISION CON EL TECHO
	{
		g.SetPosicion(g.GetXPosicion(), 68);
		g.SetVelocidad(g.GetXVelocidad(), -0.01);
	}
	if (g.GetXPosicion() < -75)						//COLISION CON LA PARED INICIAL
	{
		g.SetPosicion(-75, g.GetYPosicion());
		g.SetVelocidad(0.0, g.GetYVelocidad());
	}
	if (g.GetXPosicion() > 800)						//COLISION CON LA PARED FINAL
	{
		g.SetPosicion(800, g.GetYPosicion());
		g.SetVelocidad(0.0, g.GetYVelocidad());
	}

}

void Interaccion::rebote(Remy& g, Fondo& f) {

	//Interaccion::rebote(g, f.Suelo);
	f.plataformas.Rebote(g);
	f.quesos.Rebote(g);
	f.bombas.Rebote(g);
	f.vidas.Rebote(g);
	

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
		r.SetPosicion(g.GetXPosicion() - 5, r.GetYPosicion());
		r.SetAceleracion(-6000, -100);

	
		return true;
	}
	else if (((r.GetXPosicion() - g.GetXPosicion()) < +5.7) && (r.GetXPosicion() > g.GetXPosicion()) && (r.GetYPosicion() - g.GetYPosicion()) < 5)
	{
		
		r.SetPosicion(g.GetXPosicion() + 5.7, r.GetYPosicion());
		r.SetAceleracion(6000, -100);
		
		
		return true;
	}

	else
	{
		r.SetAceleracion(0,-100);
		return false;
	}
	
}

bool Interaccion::rebote(Disparo& d, Gatitos& g)
{
	if (abs(d.GetPosicion().GetX() - g.GetPosicion().GetX()) < 5)
	{
		return true;
	}
	else
		return false;
}

bool Interaccion::rebote(Disparo& d, Plataforma& p)
{
	if (d.GetPosicion().GetY() < 0)
	{
		return true;
	}
	else if ((d.GetPosicion().GetY() < p.GetYCoordenada() + 1) && (d.GetPosicion().GetY() > p.GetYCoordenada() - 1) && (d.GetPosicion().GetX() > p.GetXCoordenada()) && (d.GetPosicion().GetX() < p.GetXCoordenada() + p.GetLargo()))
	{
		return true;

	}
	else
		return false;
	
}

bool Interaccion::rebote(Remy& r, Trampa& t)
{
	if (abs(r.GetXPosicion() - t.GetX()) < 4 && abs(r.GetYPosicion() - t.GetY()) < 2.5)
	{
		return true;
	}
	else
		return false;
}