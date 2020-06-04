#include "ListaQuesos.h"
#include "Interaccion.h"

ListaQuesos::ListaQuesos()
{
	numero = 0;
 
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

	if (numero < 5)
	{
		lista[numero] = q;
		numero++; 
		return true;
	}
	else
		return false;
}

void ListaQuesos::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{
		lista[i]->Dibuja(); 
	}
}

void ListaQuesos::Rebote(Remy& r)
{
	for (int i = 0; i < numero; i++)
	{
		if (Interaccion::rebote(r, *(lista[i])))
		{
			Eliminar(i);
			r.SetQuesos((r.GetQuesos()) + 1);
			ETSIDI::play("sonidos/comequeso.mp3");
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