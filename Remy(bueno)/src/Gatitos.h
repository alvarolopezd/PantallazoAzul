#pragma once
#include "Vector2D.h"
#include "ETSIDI.h"


using ETSIDI::SpriteSequence;

class Gatitos
{
private:

	SpriteSequence Camina;


	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	int vida;
	float altura;
	float limites;
	Vector2D patrulla;
	
	
	friend class Interaccion;


public:
	
	
	Gatitos(float _x,float _y);
	//Metodos SET
	void SetPosicion(float _XPosicion, float _YPosicion,float _limites=20);
	void SetPosicion(Vector2D _posicion);
	void SetVelocidad(float _XVelocidad, float _YVelocidad);
	void SetAceleracion(float _XAceleracion, float _YAceleracion);
	void SetVida(int _vida);
	void SetAltura(float _altura);
	

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
	void Atacar();
	void Pintar();

};
