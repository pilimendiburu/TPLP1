#include "BASIC.h"
#define CostoB 200.00//defino costo basic

float BASIC::CostoBasic = CostoB;
BASIC::BASIC(int Edad, Paises Pais, string Password, const string Name, string tarjeta):
	Usuarios(Edad, Pais, Password, Name)
{
	this->tarjeta = tarjeta;
}

BASIC::~BASIC(){

}

BASIC::BASIC(Usuarios& user, string tarjeta):Usuarios(user)
{
	this->tarjeta = tarjeta;
}






