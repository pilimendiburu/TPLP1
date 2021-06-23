#include "Plataforma.h"
#include "FREE.h"
#include "BASIC.h"
#include "PREMIUM.h"

Plataforma::Plataforma():Nombre("Labflix")
{
	this->CantidadUsuariosConectados=0;
	//ListaUsuariosxDia = new cListaT<Usuarios>;
	this-> UsuariosxSemana=0;
	m_Servicios=NULL;
	m_Usuarios=NULL;
	
	paises=new Paises[14]{Argentina, Chile,	Peru, Brasil, Colombia,	Mexico,	EstadosUnidos,
	Canada,Bolivia,	Paraguay,	Uruguay,	Venezuela,	Espa�a,	Francia};
}

Plataforma::~Plataforma(){
	//delete ListaUsuariosxDia;
	delete m_Usuarios;
	delete m_Servicios;
}


void Plataforma::EstadisticasPorContenido(){

}


cListaT<Audio>* Plataforma::MasEscuchados(tm Periodo){

	return  NULL;
}


cListaT<Juegos>* Plataforma::MasJugados(tm Periodo){

	return  NULL;
}


cListaT<AudioVisual>* Plataforma::MasVistos(tm Periodo){

	return  NULL;
}



void Plataforma::PromedioConectadosenSemanaxDia()
{
	int cant = UsuariosxSemana / 7;
}




void Plataforma::VerResumen(){

}

void Plataforma::EditarCuenta(Usuarios* user, int tipo, bool eliminar)
{	/*
	* 2 OPCIONES:
	* -Eliminar Cuenta.
	* -Cambiar tipo usuario.
	*/
	if (eliminar == true)
	{
		user->setEliminado(true);//=> se elimina al final de la semana para no tener problemas de memoria.
	}
	else//editamos la cuenta.
	{
		int t;//dependiendo el tipo del usuario es 0,1,2 (corresponde con el enum)
		if (dynamic_cast<FREE*>(user) != NULL)
		{
			t = 0;
		}
		if (dynamic_cast<BASIC*>(user) != NULL)
		{
			t = 1;
		}
		if (dynamic_cast<PREMIUM*>(user) != NULL)
		{
			t = 2;
		}
		if (tipo == Free && t!=0)
		{
			//hacemos funcion que copia al usuario y lo pasa a free
			FREE* cambiado = new FREE(*user);
			if (tipo == 2)//significa que era premium 
			{
				//de premium a free->baja calidad
			}
		}
		else if (tipo == basic && t!=1)
		{
			if (tipo == 2)//significa que era premium y ya tengo datos de una tarjeta.
			{
				//de premium a basic->baja calidad

				//pido datos de tarjeta del usuario premium y lo pongo en constructor
				//BASIC*cambiado=new 
			}
			//BASIC* cambiado = new BASIC(*user, 0);//tendriamos que pedir datos de una tarjeta!!!
		}
		else if (tipo == premium && t!=2)
		{
			//no olvidar de mejorar la calidad a 1080!!->llamar a funicion de audiovisual MejorarCalidad
		}
		else
		{
			throw exception("Ese tipo no se encuentra disponible o ya sos el tipo de usuario");//ya es de ese tipo
		}
	}
	//para mi: tiene que recibir el usuario y el tipo que se quiere cambiar
	//hacer enum con tipos de usuarios-> solo se puede elegir esas opciones
	

	//despues adentro si podemos hacer una funcion si queremos-> que haria igual?
	//comparamos el tipo que recibimos con todos los tipos hasta que sean iguales
	//si no hay ninguno igual -> throw que no se pudo editar nada-> si tenemos el enum haria falta?
	//si coincide con alguno: -> dynamic_cast para saber el tipo de usuario que era originalmente.
	//hacer copia del usuario y cambiar el tipo.->ni idea
}


