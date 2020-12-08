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
		void crearLista();
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
	Nodo *p;
	p = cabeza->GetLiga();
	while(p->GetLiga() != cabeza) {
		p = p->GetLiga();
	}
	d = p->GetDato();
	delete p;
	return d;
}

int Lista_C::contarNodos(){
	int i = 0;
	Nodo *p;
	p = cabeza->GetLiga();
	while(p->GetLiga() != cabeza) {
		p = p->GetLiga();
		i++;
	}
	return i;
}

Lista_C::~Lista_C() { }
 
