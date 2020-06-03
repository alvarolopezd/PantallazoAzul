#pragma once
#include <iostream>
#include "ETSIDI.h"
#include "Enemigo.h"

using namespace std;

using ETSIDI::SpriteSequence;

class Skinner : public Enemigo 
{
private:

	SpriteSequence Ataque;
	SpriteSequence Quieto;
	SpriteSequence Salto;
	

	
	int atacar;
	// OBJETOS PARA PINTAR

public:
	Skinner();

	void SetAtaque(int estado);

	void Mover(float t);
	void Atacar();
	void Pintar();
	SpriteSequence Muerto;
};
