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
	int estado = 0;

	
	
	friend class Interaccion;


public:
	
	
	Gatitos();
	//Metodos SET
	void SetPosicion(float _XPosicion, float _YPosicion);
	void SetVelocidad(float _XVelocidad, float _YVelocidad);
	void SetAceleracion(float _XAceleracion, float _YAceleracion);
	void SetVida(int _vida);
	void SetAltura(float _altura);
	
	//Metodos GET
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
