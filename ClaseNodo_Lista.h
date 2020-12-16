/********************************************************************************************
* -Proyecto Final                                                                           *
* -Clase Nodo para la lista simple                                                          *
* -Grupo de trabajo: MSCA y SMJ                                                             *
* -Fecha de creacion: 04/12/2020                                                            *
* -Ultima modificacion: 15/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

class Nodo_L{
	private:
		int dato; 
		Nodo_L *liga;
		
	public:	
		Nodo_L();
		Nodo_L * GetLiga(void);
		void SetLiga(Nodo_L *);
		int GetDato(void);
		void SetDato(int);
		~Nodo_L(void);
		friend class Lista;
};

Nodo_L::Nodo_L() 
{
	dato = 0;
	liga = NULL;
}

Nodo_L * Nodo_L::GetLiga()
{
	return liga;
}

void Nodo_L::SetLiga(Nodo_L * l)
{
	liga = l;
}
		
int Nodo_L::GetDato() 
{
	return dato;
}

void Nodo_L::SetDato(int d)
{
	dato = d;
}

Nodo_L::~Nodo_L() { }
