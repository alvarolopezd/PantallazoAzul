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

	if (numero < 1)
	{
		lista[numero] = q;
		numero++; 
		return true;
	}
	else
		return false;
}

void ListaEspadas::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ 
		lista[i]->Dibuja(); 
	}
}

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