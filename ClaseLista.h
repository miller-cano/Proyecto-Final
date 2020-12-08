#include <iostream>
#include "ClaseNodo_Lista.h"
#include <string.h>

using namespace std;

class Lista
{
	private:
		Nodo_L * Punta;
	public:
		Lista();
		Nodo_L * GetPunta(void);
		void insertar(int);
		void mostrarLista();
		int contar();
		int sacar();
		~Lista();
	
};
 
Lista::Lista()
{
	Punta = NULL;
}

Nodo_L * Lista::GetPunta(){
	return Punta;
}

void Lista::insertar(int d)
{
	Nodo_L *x = new Nodo_L(), *p;
	
	x->SetDato(d);
	
	if(Punta == NULL)
	{
		Punta = x;
	}
	else
	{
		p = Punta;
		while(p->GetLiga() != NULL){
			p = p->GetLiga();
		}
		p->SetLiga(x);
	}
}

void Lista::mostrarLista(){
	
	if(Punta != NULL){
		
		Nodo_L *p = Punta;
		int i = 1;
		cout<<"\n\t*********************************";
		cout<<"\n\t|        DATOS DE LA LISTA      |";
		cout<<"\n\t*********************************";
		
		while(p != NULL) {
			cout<<"\n\t|  "<<i<<")  "<<p->GetDato();
			p = p->GetLiga();
			i++;
		}
		cout<<"\n\t*********************************"<<endl;

	}else{
		cout<<"\n\t\tLA LISTA ESTA VACIA. "<<endl<<endl;
	}
}

int Lista::contar(){
	Nodo_L *p;
	int contador  = 0;
	
	p = Punta;
		while(p != NULL){
			p = p->GetLiga();
			contador++;
		}
	
	return contador;
}

int Lista::sacar(){
	Nodo_L *p,*q;
	int r;
	
	if(Punta != NULL){
		if(Punta->GetLiga() != NULL){
			
			p = Punta;
			q = Punta;
		
				while(p->GetLiga() != NULL){
					p = p->GetLiga();
				}
				
				while(q->GetLiga() != p){
					q = q->GetLiga();
				}
		
			q->SetLiga(NULL);
			r = p->GetDato();
			delete p;
	}else{
		r = Punta->GetDato();
		Punta = NULL;
	
		
	}
}else{
	cout<<"La lista esta vacia, no se puede sacar mas";
}
	return r;
}

Lista::~Lista() { }
