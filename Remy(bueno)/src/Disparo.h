#pragma once
#include "Vector2D.h"
#include "ETSIDI.h"

using ETSIDI::SpriteSequence;

class Disparo {
private:
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	friend class Interaccion;

public: 
	SpriteSequence Espada;
	Disparo(float _xpos,float _ypos,float _xvel=50,float _yvel=0,float _xacel=0,float _yacel=-65);
	void SetPosicion(float _x, float _y);
	void Dibuja();
	void Mueve(float t);
	void SetVelocidad(float _x,float _y);

	Vector2D GetPosicion();
	Vector2D GetVelocidad();
	Vector2D GetAceleracion();

};