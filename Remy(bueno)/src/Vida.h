#pragma once
#include "Vector2D.h"
#include "ETSIDI.h"


using ETSIDI::SpriteSequence;

class Vida
{
private:

	SpriteSequence vida;

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	friend class Interaccion;


public:


	Vida(float _x, float _y);
	//Metodos SET
	void SetPosicion(float _XPosicion, float _YPosicion, float _limites = 20);
	void SetPosicion(Vector2D _posicion);
	void SetVelocidad(float _XVelocidad, float _YVelocidad);
	void SetAceleracion(float _XAceleracion, float _YAceleracion);



	//Metodos GET
	Vector2D GetPosicion();
	float GetXPosicion();
	float GetYPosicion();
	float GetXVelocidad();
	float GetYVelocidad();
	float GetXAceleracion();
	float GetYAceleracion();

	//Metodos Imagen Movimiento
	void Mover(float t);
	void Dibuja();

};

