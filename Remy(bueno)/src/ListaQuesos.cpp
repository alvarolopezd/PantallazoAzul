#include "ListaQuesos.h"
#include "Interaccion.h"

ListaQuesos::ListaQuesos()
{
	//Inicilizar el numero de Plataforma iniciales a 0
	numero = 0;
	//Poner a NULL todos lo selementos de la lista 
	for (int i = 0; i <= 5; i++)
	{
		lista[i] = 0;
	}
}

ListaQuesos::~ListaQuesos()
{

}

bool ListaQuesos::agregar(Queso* q)
{
	// Añadir que si la Plataforma ya está creatda haga un return false
	if (numero < 5)
	{
		lista[numero] = q;
		numero++; // Aumentar el numero para ir recorriendo la lista e ir agregando Plataforma sobre la lista
		return true;
	}
	else
		return false;
}

void ListaQuesos::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ //lista[i] es una direccion de memoria y para acceder dentro necesito ->
		lista[i]->Dibuja(); // Dibujar una a una las Plataforma para llamar al metood Dibuja dentro de Plataforma
	}
}

void ListaQuesos::Rebote(Remy& r)
{
	int j = 0;
	for (int i = 0; i < numero; i++)
	{
		if (Interaccion::rebote(r, *(lista[i])))
		{
			Eliminar(i);
			r.SetQuesos(j++);
		}
	}
}

void ListaQuesos::destruirContenido()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}

void ListaQuesos::Eliminar(int index)
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

void ListaQuesos::Eliminar(Queso* q)
{
	for (int i = 0; i < numero; i++)
	{
		if (lista[i] == q)
			Eliminar(i);
		return;
	}
}

Queso* ListaQuesos::operator [](int i)
{
	if (i >= numero)
		i = numero - 1;
	if (i < 0)
		i = 0;

	return lista[i];
}