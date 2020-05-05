#include "Remy.h"

Remy::Remy() :Camina("Imagenes/Remy_Anda.png", 4, 1, 50),Quieto("Imagenes/Remy_Quieto.png",1,1,50),Salto("Imagenes/Remy_Salto.png",2,1,50)
{
	
	SetAceleracion(0, -100);
	SetAltura(15);
	Camina.setCenter(5, 1);
	Camina.setSize(10, altura);

	Quieto.setCenter(5, 1.9);
	Quieto.setSize(10, altura-1);

	Salto.setCenter(5, 1.9);
	Salto.setSize(10, altura);

}

void Remy::SetPosicion(float _XPosicion, float _YPosicion)
{
	posicion.SetCoordenadas(_XPosicion, _YPosicion);

}

void Remy::SetVelocidad(float _XVelocidad, float _YVelocidad)
{
	velocidad.SetCoordenadas(_XVelocidad, _YVelocidad);
}

void Remy::SetAceleracion(float _XAceleracion, float _YAceleracion)
{
	aceleracion.SetCoordenadas(_XAceleracion, _YAceleracion);
}

void Remy::SetVida(int _vida)
{
	vida = _vida;
}

void Remy::SetAltura(float _altura) {
	altura = _altura;
}

float Remy::GetXPosicion()
{
	return posicion.GetX();
}

float Remy::GetYPosicion()
{
	return posicion.GetY();
}

float Remy::GetXVelocidad()
{
	return velocidad.GetX();
}

float Remy::GetYVelocidad()
{
	return velocidad.GetY();
}

float Remy::GetXAceleracion()
{
	return aceleracion.GetX();
}

float Remy::GetYAceleracion()
{
	return aceleracion.GetY();
}

void Remy::SetObjetos()
{
	//ojoi.SetAtributos((GetXPosicion() - 1), (GetYPosicion() + 13.5), 0.5, 50, 50, 0, 0, 0);
	//ojod.SetAtributos((GetXPosicion() + 1), (GetYPosicion() + 13.5), 0.5, 50, 50, 0, 0, 0);
	//cabeza.SetAtributos(GetXPosicion(), GetYPosicion() + 11, 3, 50, 50, 129, 216, 208);
	//cuerpo.SetAtributos(GetXPosicion(), (GetYPosicion() + 2), 3.25, 7, 50, 50, 129, 216, 208);
	//sombrero.SetAtributos(GetXPosicion(), (GetYPosicion() + 14), 1.5, 2.5, 50, 50, 212, 0, 40);

}

float Remy::GetAltura() {
	return altura;
}

void Remy::Pintar()
{
	/*
	glRotatef(-90, 1, 0, 0);
	glDisable(GL_LIGHTING);
	glTranslatef(sombrero.GetX(),sombrero.GetY(),0);
	glColor3ub(sombrero.GetRojo(), sombrero.GetVerde(), sombrero.GetAzul());
	glutSolidCone(sombrero.GetBase(), sombrero.GetHeight(), sombrero.GetSlices(), sombrero.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	glTranslatef(-sombrero.GetX(), -sombrero.GetY(),0);
	glRotatef(90, 1, 0, 0);

	glRotatef(-90, 1, 0, 0);
	glDisable(GL_LIGHTING);
	glTranslatef(cuerpo.GetX(),cuerpo.GetY(),0);
	glColor3ub(cuerpo.GetRojo(), cuerpo.GetVerde(), cuerpo.GetAzul());
	glutSolidCone(cuerpo.GetBase(), cuerpo.GetHeight(), cuerpo.GetSlices(), cuerpo.GetStacks()); // QUE ME DUVUELVE TOODS LOS PARAMETROS DEL CONO
	glTranslatef(-cuerpo.GetX(), -cuerpo.GetY(),0);
	glRotatef(90, 1, 0, 0);

	glDisable(GL_LIGHTING);
	glTranslatef(cabeza.GetX(),cabeza.GetY(),0);
	glutSolidSphere(cabeza.GetRadius(), cabeza.GetSlices(), cabeza.GetStacks());
	glTranslatef(-cabeza.GetX(),-cabeza.GetY(),0);

	glDisable(GL_LIGHTING);
	glColor3ub(ojod.GetRojo(), ojod.GetVerde(), ojod.GetAzul());
	glTranslatef(ojod.GetX(),ojod.GetY() - 1,4);
	glutSolidSphere(ojod.GetRadius(), ojod.GetSlices(), ojod.GetStacks());
	glTranslatef(-ojod.GetX(),-ojod.GetY()+1,-4);

	glDisable(GL_LIGHTING);
	//glColor3ub(sombrero.GetRojo(), sombrero.GetVerde(), sombrero.GetAzul());
	glTranslatef(ojoi.GetX(),ojoi.GetY(),4);
	glutSolidSphere(ojoi.GetRadius(), ojoi.GetSlices(), ojoi.GetStacks());
	glTranslatef(-ojoi.GetX(),-ojoi.GetY(),0);
	*/

	glPushMatrix();
	glTranslatef(posicion.GetX(), posicion.GetY(), 0.5);
	glColor3f(1.0f, 1.0f, 1.0f);

	if (velocidad.GetX() > 0.01  )
	{
		Camina.flip(false, false);
		Salto.flip(false, false);

	}
	else if (velocidad.GetX() < -0.01)
	{
		Camina.flip(true, false);
		Salto.flip(true, false);

	}


	if (velocidad.GetX() < 0.01 && velocidad.GetX()>-0.01 && velocidad.GetY()==0)
	{
		Quieto.setState(0);
		Camina.setState(0);
		Quieto.draw();
	}
	else if (Camina.getState() == 0)
	{
		Camina.setState(1, false);
		
	}

	if (velocidad.GetY()==0 && (velocidad.GetX()>0.1 || velocidad.GetX()<-0.1)  )
	{
		Camina.draw();
	}
	if (velocidad.GetY()!=0)
	{
		Salto.draw();
	}



	

	
	


	glTranslatef(-posicion.GetX(), -posicion.GetY(), -0.5);

	glPopMatrix();

}

void Remy::Mover(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
	Camina.loop();
	Salto.loop();
}