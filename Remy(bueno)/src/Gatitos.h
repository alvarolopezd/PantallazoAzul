#pragma once
#include "Vector2D.h"
#include "ETSIDI.h"


using ETSIDI::SpriteSequence;

class Gatitos
{
private:
	SpriteSequence Camina;
	SpriteSequence Quieto;

	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	float altura;
	float limites;
	Vector2D patrulla;
	int atacar = 0;
	
	friend class Interaccion;

public:
	
	SpriteSequence Ataque;
	Gatitos(float _x,float _y);
	//Metodos SET
	void SetPosicion(float _XPosicion, float _YPosicion,float _limites=20);
	void SetPosicion(Vector2D _posicion);
	void SetVelocidad(float _XVelocidad, float _YVelocidad);
	void SetAceleracion(float _XAceleracion, float _YAceleracion);
	void SetAltura(float _altura);
	
	//Metodos GET
	Vector2D GetPosicion();
	Vector2D GetPatrulla();
	float GetLimites();
	float GetXPosicion();
	float GetYPosicion();
	float GetXVelocidad();
	float GetYVelocidad();
	float GetXAceleracion();
	float GetYAceleracion();
	void SetAtaque(int estado);

	//Metodos Imagen Movimiento
	void Mover(float t);
	void Pintar();

};
