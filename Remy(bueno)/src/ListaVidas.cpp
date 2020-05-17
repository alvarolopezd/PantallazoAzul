#include "ListaVidas.h"
#include "Interaccion.h"

ListaVidas::ListaVidas()
{
	//Inicilizar el numero de Plataforma iniciales a 0
	numero = 0;
	//Poner a NULL todos lo selementos de la lista 
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
	// Añadir que si la Plataforma ya está creatda haga un return false
	if (numero < NUM_MAX_VIDAS)
	{
		lista[numero] = q;
		numero++; // Aumentar el numero para ir recorriendo la lista e ir agregando Plataforma sobre la lista
		return true;
	}
	else
		return false;
}

void ListaVidas::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ //lista[i] es una direccion de memoria y para acceder dentro necesito ->
		lista[i]->Dibuja(); // Dibujar una a una las Plataforma para llamar al metood Dibuja dentro de Plataforma
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