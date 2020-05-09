#include "Gatitos.h"
#include "Disparo.h"
#include "Remy.h"
#include "Fondo.h"
#include "Interaccion.h"
#include "ListaPlataformas.h"
#include "ListaEspadas.h"


class Mundo
{
public: 
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void teclaEspecial(unsigned char _key);
	void teclaArriba(unsigned char _key);
public:

	Gatitos g1,g2,g3,g4;
	Remy remy;
	ListaEspadas disparos;
	Fondo escenario;
	float x_ojo;
	float y_ojo;
	float z_ojo;
};
