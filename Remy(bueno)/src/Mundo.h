#include "ListaGatitos.h"
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
	void SetVidas(int);
	int GetVida();
	bool CargarNivel();
public:

	ListaGatitos gatitos;
	Remy remy;
	ListaEspadas disparos;
	Fondo escenario;
	float x_ojo;
	float y_ojo;
	float z_ojo;
	int nivel;
	int vidas;
};
