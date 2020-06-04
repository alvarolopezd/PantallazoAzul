#include "ListaGatitos.h"

using namespace std;

ListaGatitos::ListaGatitos()
{
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
	if (numero < NUM_MAX_GATOS)
	{
		lista[numero] = q;
		numero++; 
		return true;
	}
	else
		return false;
}

void ListaGatitos::Dibuja()
{
	for (int i = 0; i < numero; i++)
	{ 
		lista[i]->Pintar();
	}
}

void ListaGatitos::Rebote(Remy& r)
{
	for (int i = 0; i < numero; i++)
	{
		if (abs(r.GetXPosicion() - lista[i]->GetXPosicion()) < 6.5 && r.GetXPosicion() <lista[i]->GetXPosicion() && r.GetYPosicion() < 15)
		{
			
			lista[i]->SetAtaque(1);
			lista[i]->Ataque.flip(true, false);
			lista[i]->SetVelocidad(-0.4, 0);

		}
		else if (abs(r.GetXPosicion() - lista[i]->GetXPosicion()) < 7 && r.GetXPosicion() > lista[i]->GetXPosicion() && r.GetYPosicion() < 15)
		{
			lista[i]->SetAtaque(1);
			lista[i]->Ataque.flip(false, false);
			lista[i]->SetVelocidad(0.4, 0);
		}
		else if (r.GetYPosicion() < 15)
		{
			if (abs(r.GetXPosicion() - lista[i]->GetXPosicion()) < 60 && r.GetXPosicion() < lista[i]->GetXPosicion())
				lista[i]->SetVelocidad(-10, 0);
			else if (abs(r.GetXPosicion() - lista[i]->GetXPosicion()) < 60 && r.GetXPosicion() > lista[i]->GetXPosicion())
				lista[i]->SetVelocidad(10, 0);
		}
		else
		{
			lista[i]->SetVelocidad(0, 0);
		}

		if (Interaccion::rebote(r, *(lista[i])))
		{
			ETSIDI::play("sonidos/Aranazo.mp3");
			r.SetVida(r.GetVida() - 1);
			if (abs(r.GetXPosicion() - lista[i]->GetXPosicion()) < 20 && r.GetXPosicion() < lista[i]->GetXPosicion())
				lista[i]->SetVelocidad(-10, 0);
			else if (abs(r.GetXPosicion() - lista[i]->GetXPosicion()) < 20 && r.GetXPosicion() > lista[i]->GetXPosicion())
				lista[i]->SetVelocidad(10, 0);
		}
	}
}

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