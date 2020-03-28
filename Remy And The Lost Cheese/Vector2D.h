#pragma once

class Vector2D
{
private:
	float x;
	float y;
public:
	void SetCoordenadas(float _x,float _y);
	float GetX();
	float GetY();
};

void Vector2D::SetCoordenadas(float _x, float _y)
{
	x = _x;
	y = _y;
}

float Vector2D::GetX()
{
	return x;
}

float Vector2D::GetY()
{
	return y;
}

