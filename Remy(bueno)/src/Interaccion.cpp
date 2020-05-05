#include "Interaccion.h"
#include <math.h>


void Interaccion::rebote(Gatitos& g) {

	if (g.GetYPosicion()-1 <= 0)
	{
		g.SetPosicion(g.GetXPosicion(), 0);
	}

}



void Interaccion::rebote(Remy& g, Fondo& f) {

	Interaccion::rebote(g, f.Suelo);
	f.plataformas.Rebote(g);
	

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
				g.SetVelocidad(0, g.GetYVelocidad());
			}
			else 
			{
				g.SetPosicion(p.GetXCoordenada()+p.GetLargo()+3.5, g.GetYPosicion());
				g.SetVelocidad(0, g.GetYVelocidad());
			}
		}
	}


}



