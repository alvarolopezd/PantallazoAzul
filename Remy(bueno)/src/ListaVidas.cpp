#include "ListaVidas.h"
#include "Interaccion.h"

ListaVidas::ListaVidas()
{
	numero = 0;

	for (int i = 0; i < NUM_MAX_VIDAS; i++)
	{
		lista[i] = 0;
	}
}

ListaVidas::~ListaVidas()
{

}

bool ListaVidas::agregar(Vida* q)
{

	if (numero < NUM_MAX_VIDAS)
	{
		lista[numero] = q;
		numero++; 
		return true;
	}
	else
		return false;
}

void ListaVidas::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ 
		lista[i]->Dibuja(); 
	}
}

void ListaVidas::Rebote(Remy& r)
{
	Eliminar(r.GetVida());

	if (r.GetVida() <= 0)
	{
		for (int j = 0; j < numero; j++)
			Eliminar(lista[j]);
	}
	
	for (int i = 0; i < numero; i++)
	{
		lista[i]->SetVelocidad(r.GetXVelocidad(), 0);
		lista[i]->SetPosicion(r.GetXPosicion()+50 - 12 * i, 70);
	}
}

void ListaVidas::destruirContenido()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}

void ListaVidas::Eliminar(int index)
{
	if ((index < 0) || (index >= numero))
	{
		return;
	}
	delete lista[index];
	numero--;
	for (int i = index; i < numero; i++)
	{
		lista[i] = lista[i + 1];
	}
}

void ListaVidas::Eliminar(Vida* q)
{
	for (int i = 0; i < numero; i++)
	{
		if (lista[i] == q)
			Eliminar(i);
		return;
	}
}

Vida* ListaVidas::operator [](int i)
{
	if (i >= numero)
		i = numero - 1;
	if (i < 0)
		i = 0;

	return lista[i];
}

void ListaVidas::Mueve(float t)
{
	for (int i = 0; i < numero; i++)
	{
		lista[i]->Mover(t);
	}

}