#pragma once

#include "Mundo.h"

class Coordinador
{
public:
	Coordinador();
	virtual ~Coordinador();

	void Inicializa();
	void Dibuja();
	void Tecla(unsigned char key);
	void Mueve();
	void teclaEspecial(int key);
	void teclaArriba(int key);

protected:
	Mundo mundo;

	enum Estado{INICIO, JUEGO, GAMEOVER, EXITO, PAUSA, DIFICULTAD};
	Estado estado;
};