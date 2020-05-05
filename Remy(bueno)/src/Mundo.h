#include "Gatitos.h"
#include "Remy.h"
#include "Fondo.h"
#include "Interaccion.h"
#include "ListaPlataformas.h"





class Mundo
{
public: 
	void Tecla(unsigned char key);
	void Inicializa();
	void RotarOjo();
	void Mueve();
	void Dibuja();
	void teclaEspecial(unsigned char _key);
public:

	ListaPlataformas plataforma;
	Gatitos g1,g2,g3,g4;
	Remy remy;
	Fondo escenario;
	float x_ojo;
	float y_ojo;
	float z_ojo;
};
