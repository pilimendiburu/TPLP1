///////////////////////////////////////////////////////////
//  BASIC.h
//  Implementation of the Class BASIC
//  Created on:      01-Jun-2021 10:49:59 AM
//  Original author: gstun
///////////////////////////////////////////////////////////

#pragma once

#include "Usuarios.h"
#include "Librerias.h"

class BASIC : public Usuarios
{
private:
	static float CostoBasic;//lo cambie a static
	string tarjeta;

public:
	BASIC(int Edad, Paises Pais, string Password, const string Name, string tarjeta);
	virtual ~BASIC();
	BASIC(Usuarios& user, string tarjeta);
	


	//void SeleccionarServicio(cListaT<Servicios>* servicio);
	//elije un servicio de la lista de servicios




};
