#include "Vector2D.h"
#include <math.h>

Vector2D::Vector2D() {
	x =0;
	y =0;
}
Vector2D::Vector2D(float _x,float _y) {
	x = _x;
	y = _y;
}

void Vector2D::SetCoordenadas(float _x,float _y) {

	x = _x;
	y = _y;
}

float Vector2D::GetX(){
	return x;
}

float Vector2D::GetY() {
	return y;
}

float Vector2D::Modulo() {
	return (float)sqrtf(x * x + y * y);
}

float Vector2D::Argumento() {
	return (float)atan2(y, x);
}

Vector2D Vector2D::Unitario() {
	Vector2D retorno(x, y);
	float mod = Modulo();
	if (mod > 0.00001)
	{
		retorno.SetCoordenadas(retorno.GetX() / mod, retorno.GetY() / mod);

	}
	return retorno;
}

Vector2D Vector2D::operator-(Vector2D &v) {
	Vector2D res(0,0);
	res.SetCoordenadas(x - v.GetX(), y - v.GetY());
	return res;
}

Vector2D Vector2D::operator+(Vector2D&v) {
	Vector2D sum(0, 0);
	sum.SetCoordenadas(x + v.GetX(), y + v.GetY());
	return sum;

}
float Vector2D::operator*(Vector2D&v) {
	float producto;
	producto = (x * v.GetX()) + (y * v.GetY());
	return producto;
}

Vector2D Vector2D::operator *(float num) {
	Vector2D producto(0, 0);
	producto.SetCoordenadas(x * num, y * num);
	return producto;
}