#pragma once

class Vector2D 
{
public:
	float x, y;
public:
	Vector2D(float _x, float _y);
	Vector2D();
	void SetCoordenadas(float _x,float _y);
	float GetX();
	float GetY();

	float Modulo();
	float Argumento();
	Vector2D Unitario();
	Vector2D operator-(Vector2D&);
	Vector2D operator+(Vector2D&);
	float operator*(Vector2D&);
	Vector2D operator *(float);
};
