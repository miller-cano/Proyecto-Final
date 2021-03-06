/********************************************************************************************
* -Proyecto Final                                                                           *
* -Clase nodo para la lista circular                                                        *
* -Grupo de trabajo: MSCA                                                                   *
* -Fecha de creacion: 04/12/2020                                                            *
* -Ultima modificacion: 15/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

class Nodo{
	private:
		int dato;
		Nodo *liga;
		
	public:	
		Nodo();
		Nodo * GetLiga(void);
		void SetLiga(Nodo *);
		int GetDato(void);
		void SetDato(int);
		~Nodo(void);
		friend class Lista;
};

Nodo::Nodo() 
{
	dato = 0;
	liga = NULL;
}

Nodo * Nodo::GetLiga()
{
	return liga;
}

void Nodo::SetLiga(Nodo * l)
{
	liga = l;
}
		
int Nodo::GetDato() 
{
	return dato;
}

void Nodo::SetDato(int d)
{
	dato = d;
}

Nodo::~Nodo() { }
