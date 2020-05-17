#include "ListaGatitos.h"



ListaGatitos::ListaGatitos()
{
	//Inicilizar el numero de Plataforma iniciales a 0
	numero = 0;
	//Poner a NULL todos lo selementos de la lista 
	for (int i = 0; i <NUM_MAX_GATOS; i++)
	{
		lista[i] = 0;
	}
}

ListaGatitos::~ListaGatitos()
{

}

int ListaGatitos::GetNumero()
{
	return numero;
}

Gatitos ListaGatitos::GetGatitos(int j)
{
	return *lista[j];
}

bool ListaGatitos::agregar(Gatitos* q)
{
	// Añadir que si la Plataforma ya está creatda haga un return false
	if (numero < NUM_MAX_GATOS)
	{
		lista[numero] = q;
		numero++; // Aumentar el numero para ir recorriendo la lista e ir agregando Plataforma sobre la lista
		return true;
	}
	else
		return false;
}

void ListaGatitos::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ //lista[i] es una direccion de memoria y para acceder dentro necesito ->
		lista[i]->Pintar(); // Dibujar una a una las Plataforma para llamar al metood Dibuja dentro de Plataforma
	}
}

void ListaGatitos::Rebote(Remy& r)
{
	int j = 0;
	for (int i = 0; i < numero; i++)
	{
		if (Interaccion::rebote(r, *(lista[i])))
		{
			
			r.SetVida(r.GetVida() - 1);
			
		}
	
	}
}
/*
void ListaGatitos::Rebote(ListaEspadas& r)
{

	for (int i = 0; i < numero; i++)
	{
		for (int j = 0; j < r.GetNumero(); j++)
		{
			if (Interaccion::rebote(r.GetDisparo(j), *(lista[i])))
			{
				Eliminar(lista[i]);
			}
		}
	}
}
*/
void ListaGatitos::Rebote()
{
	for (int i = 0; i < NUM_MAX_GATOS; i++)
	{
	Interaccion::rebote(*lista[i]);
	}
}

void ListaGatitos::destruirContenido()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}

void ListaGatitos::Eliminar(int index)
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

void ListaGatitos::Eliminar(Gatitos* q)
{
	for (int i = 0; i < numero; i++)
	{
		if (lista[i] == q)
			Eliminar(i);
		return;
	}
}

void ListaGatitos::Mueve(float t)
{
	for (int i = 0; i < numero; i++)
	{
		lista[i]->Mover(t);
	}

}

Gatitos* ListaGatitos::operator [](int i)
{
	if (i >= numero)
		i = numero - 1;
	if (i < 0)
		i = 0;

	return lista[i];
}