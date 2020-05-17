#include "ListaEspadas.h"


ListaEspadas::ListaEspadas()
{
	//Inicilizar el numero de Plataforma iniciales a 0
	numero = 0;
	//Poner a NULL todos lo selementos de la lista 
	for (int i = 0; i <1; i++)
	{
		lista[i] = 0;
	}
}

ListaEspadas::~ListaEspadas()
{

}

int ListaEspadas::GetNumero()
{
	return numero;
}

Disparo ListaEspadas::GetDisparo(int j)
{
	return *lista[j];
}

bool ListaEspadas::agregar(Disparo* q)
{
	// Añadir que si la Plataforma ya está creatda haga un return false
	if (numero < 1)
	{
		lista[numero] = q;
		numero++; // Aumentar el numero para ir recorriendo la lista e ir agregando Plataforma sobre la lista
		return true;
	}
	else
		return false;
}

void ListaEspadas::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ //lista[i] es una direccion de memoria y para acceder dentro necesito ->
		lista[i]->Dibuja(); // Dibujar una a una las Plataforma para llamar al metood Dibuja dentro de Plataforma
	}
}
/*
void ListaEspadas::Rebote(ListaGatitos& r)
{

	for (int i = 0; i < numero; i++)
	{
		for (int j = 0; j < r.GetNumero(); j++)
		{
			if (Interaccion::rebote(*lista[i], r.GetGatitos(j)))
			{
				Eliminar(i);
			}
		}
	}
}
*/
void ListaEspadas::Rebote(ListaPlataformas &f)
{

	for (int i = 0; i < numero; i++)
	{
		for (int j = 0; j < f.GetNumero(); j++)
		{
			if (Interaccion::rebote(*lista[i], f.GetPlataforma(j)))
			{
				Eliminar(i);
			}
			
				
		}
	}
}

void ListaEspadas::destruirContenido()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}

void ListaEspadas::Eliminar(int index)
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

void ListaEspadas::Eliminar(Disparo* q)
{
	for (int i = 0; i < numero; i++)
	{
		if (lista[i] == q)
			Eliminar(i);
		return;
	}
}

void ListaEspadas::Mueve(float t)
{
	for (int i = 0; i < numero; i++)
	{
		lista[i]->Mueve(t);
	}

}

Disparo* ListaEspadas::operator [](int i)
{
	if (i >= numero)
		i = numero - 1;
	if (i < 0)
		i = 0;

	return lista[i];
}