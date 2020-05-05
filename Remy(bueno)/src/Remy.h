#pragma once
#include "ETSIDI.h"
#include "Vector2D.h"


using ETSIDI::SpriteSequence;

class Remy
{
private:

	SpriteSequence Camina;
	SpriteSequence Quieto;
	SpriteSequence Salto;


	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
	int vida;
	float altura;

	friend class Interaccion;

public:

	Remy();

	//Metodos SET
	void SetPosicion(float _XPosicion, float _YPosicion);
	void SetVelocidad(float _XVelocidad, float _YVelocidad);
	void SetAceleracion(float _XAceleracion, float _YAceleracion);
	void SetVida(int _vida);
	void SetAltura(float _altura);
	void SetObjetos();

	//Metodos GET
	float GetXPosicion();
	float GetYPosicion();
	float GetXVelocidad();
	float GetYVelocidad();
	float GetXAceleracion();
	float GetYAceleracion();
	float GetAltura();

	//Metodos GLUT
	void Pintar();
	void Mover(float t);

};


