#pragma once
#include "ETSIDI.h"
#include "Enemigo.h"

using ETSIDI::SpriteSequence;

class Skinner : public Enemigo 
{
private:

	SpriteSequence Ataque;
	SpriteSequence Quieto;
	SpriteSequence Salto;
	SpriteSequence Muerto;

	int vida;
	int atacar;
	// OBJETOS PARA PINTAR

public:
	Skinner();

	void SetAtaque(int estado);

	void Mover(float t);
	void Atacar();
	void Pintar();
};
