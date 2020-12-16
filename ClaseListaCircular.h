/********************************************************************************************
* -Proyecto Final                                                                           *
* -Clase Lista circular                                                                     *
* -Grupo de trabajo: MSCA                                                                   *
* -Fecha de creacion: 04/12/2020                                                            *
* -Ultima modificacion: 15/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include "ClaseNodoListaCircular.h"
#include <string.h>

using namespace std;

class Lista_C
{
	private:
		Nodo * cabeza;
	public:
		Lista_C();
		Nodo * GetCabeza(void);
		void insertarFinal(int nro);
		void mostrarLista();
		int contarNodos();
		int sacarDato();
		~Lista_C();
	friend class Cola;
};

Lista_C::Lista_C()
{
	cabeza = new(class Nodo);
	cabeza->SetLiga(cabeza);
}

Nodo * Lista_C::GetCabeza(){
	return cabeza;
}

void Lista_C::insertarFinal(int d){
	Nodo * nuevo, *p;	
	nuevo = new(class Nodo);
	nuevo->SetDato(d);
	nuevo->SetLiga(cabeza);
	p = cabeza->GetLiga();
	while(p->GetLiga() != cabeza){
	      p = p->GetLiga();
	}
	p->SetLiga(nuevo);
	cout<<"\n ************************************";
	cout<<"\n |          DATO INSERTADO          |";
	cout<<"\n ************************************"<<endl;
}

void Lista_C::mostrarLista()
{	
	int i = 1;
	Nodo *p;
	p = cabeza->GetLiga();
	cout<<"\n\t*********************************************";
	cout<<"\n\t|             DATOS DE LA LISTA";
	cout<<"\n\t*********************************************";
	while(p != cabeza) {
		cout<<"\n\t|   "<<i<<") "<<p->GetDato();
		i++;
		p = p->GetLiga();
	}
	cout<<"\n\t*********************************************"<<endl;	
}

int Lista_C::sacarDato()
{
	int d;
	Nodo *p, *q;
	p = cabeza->GetLiga();
	if(p != NULL){
		if(p->GetLiga() != cabeza){
			q = cabeza->GetLiga();
			while(p->GetLiga() != cabeza) {
				p = p->GetLiga();
			}
			while(q->GetLiga() != p){
				q = q->GetLiga();
			}
			q->SetLiga(cabeza);
			d = p->GetDato();
			delete p;
		}
		else{
			d = p->GetDato();
			delete p;
			cabeza->SetLiga(cabeza);
		}
	}
	else{
		cout<<"\n\t*********************************";
		cout<<"\n\t|      LA LISTA ESTA VACIA      |";
		cout<<"\n\t*********************************"<<endl;
	}
	return d;
}

int Lista_C::contarNodos(){
	int c = 0;
	Nodo *p;
	p = cabeza->GetLiga();
	while(p != cabeza) {
		p = p->GetLiga();
		c++;
	}
	return c;
}

Lista_C::~Lista_C() { }
 
