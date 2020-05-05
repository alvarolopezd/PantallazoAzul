#include "ListaPlataformas.h"
#include "Interaccion.h"

ListaPlataformas::ListaPlataformas()
{
	//Inicilizar el numero de Plataforma iniciales a 0
	numero = 0;
	//Poner a NULL todos lo selementos de la lista 
	for (int i = 0; i <= MAX_PLATAFORMAS; i++)
	{
		lista[i] = 0;
	}
}

ListaPlataformas::~ListaPlataformas()
{

}

bool ListaPlataformas::agregar(Plataforma* e)
{
	// Añadir que si la Plataforma ya está creatda haga un return false
	if (numero < MAX_PLATAFORMAS)
	{
		lista[numero] = e;
		numero++; // Aumentar el numero para ir recorriendo la lista e ir agregando Plataforma sobre la lista
		return true;
	}
	else
		return false;
}

void ListaPlataformas::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ //lista[i] es una direccion de memoria y para acceder dentro necesito ->
		lista[i]->Pintar(); // Dibujar una a una las Plataforma para llamar al metood Dibuja dentro de Plataforma
	}
}


void ListaPlataformas::Rebote(Remy& r)
{
	for (int i = 0; i < numero; i++)
	{
		Interaccion::rebote(r,*(lista[i]));
	}
}

void ListaPlataformas::destruirContenido()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}

void ListaPlataformas::Eliminar(int index)
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

void ListaPlataformas::Eliminar(Plataforma* e)
{
	for (int i = 0; i < numero; i++)
	{
		if (lista[i] == e)
			Eliminar(i);
		return;
	}
}
