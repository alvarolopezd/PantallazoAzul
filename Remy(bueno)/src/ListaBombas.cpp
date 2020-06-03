#include "ListaBombas.h"
#include "Interaccion.h"

ListaBombas::ListaBombas()
{
	//Inicilizar el numero de Plataforma iniciales a 0
	numero = 0;
	//Poner a NULL todos lo selementos de la lista 
	for (int i = 0; i < NUM_MAX_BOMBAS; i++)
	{
		lista[i] = 0;
	}
}

ListaBombas::~ListaBombas()
{

}

bool ListaBombas::agregar(Trampa* q)
{
	// Añadir que si la Plataforma ya está creatda haga un return false
	if (numero < NUM_MAX_BOMBAS)
	{
		lista[numero] = q;
		numero++; // Aumentar el numero para ir recorriendo la lista e ir agregando Plataforma sobre la lista
		return true;
	}
	else
		return false;
}

void ListaBombas::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ //lista[i] es una direccion de memoria y para acceder dentro necesito ->
		lista[i]->Dibuja(); // Dibujar una a una las Plataforma para llamar al metood Dibuja dentro de Plataforma
	}
}

void ListaBombas::Rebote(Remy& r)
{
	
	for (int i = 0; i < numero; i++)
	{
		if (Interaccion::rebote(r, *(lista[i])))
		{
			/*
			lista[i]->SetExplosion(1);
			ETSIDI::playMusica("sonidos/bomba.mp3");
		    
			if (!lista[i]->GetExplosion())
			{
				
				r.SetVida(r.GetVida() - 3);
			}
			*/
			Eliminar(i);
			ETSIDI::play("sonidos/bomba.mp3");
		}
	}

}

void ListaBombas::destruirContenido()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}

void ListaBombas::Eliminar(int index)
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

void ListaBombas::Eliminar(Trampa* q)
{
	for (int i = 0; i < numero; i++)
	{
		if (lista[i] == q)
			Eliminar(i);
		return;
	}
}

Trampa* ListaBombas::operator [](int i)
{
	if (i >= numero)
		i = numero - 1;
	if (i < 0)
		i = 0;

	return lista[i];
}

void ListaBombas::Mueve()
{
	for (int i = 0; i < numero; i++)
	{
		lista[i]->Mueve();
	}

}