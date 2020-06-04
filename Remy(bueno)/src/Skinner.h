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
	int atacar;

public:
	Skinner();

	void SetAtaque(int estado);

	void Mover(float t);
	void Atacar();
	void Pintar();
	SpriteSequence Muerto;
};
