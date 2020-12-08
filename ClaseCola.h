#include <iostream>
#include "ClasePila.h"
#include "ClaseListaCircular.h"

using namespace std;

class Cola{
	private:
		int limite;
		int tope;
		int *vector;
		
	public:
		Cola(int n);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		void SetVector(int i);
		void Encolar(int d);
		int Desencolar();
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola A);
		void Mostrar_V();
		void Convertir_Lista(Lista_C *);
		void Convertir_Pila(Pila A);
		~Cola();
};

Cola::Cola(int n)
{
	limite = n-1;
	tope = -1;
	vector = new int(n);
}

int Cola::GetLimite()
{
	return limite;
}

void Cola::SetLimite(int l)
{
	limite = l;
}

int Cola::GetTope()
{
	return tope;
}

void Cola::SetTope(int t)
{
	tope = t;
}

int Cola::GetVector()
{
	return vector[0];
}

void Cola::SetVector(int i)
{
	vector[0] = i;
}	
		
bool Cola::ColaLlena()
{
	bool band = false;
	if(tope == limite){
		band = true;
	}
	return band;
}

bool Cola::ColaVacia()
{
	bool band = false;
	if(tope == -1){
		band = true;
	}
	return band;
}

void Cola::Encolar(int d)
{
	if(ColaLlena() == false){
		tope++;
		vector[tope] = d;
 	}
		else if(ColaLlena() == true){
		//	cout<<"\nLA COLA ESTA LLENA"<<endl;
		}
}

int Cola::Desencolar()
{
	int d, i = 1;
	
	if(ColaVacia() == false){
		d = vector[0];
		while(i <= tope){
			vector[i-1] = vector[i];
			i++;
		}
		tope--;
	}
		else if(ColaVacia() == true){
		//	cout<<"\nLA COLA ESTA VACIA"<<endl;
		}
	return d;
}

void Cola::LlenarCola(Cola A)
{
	while(A.ColaVacia() == false){
		Encolar(A.Desencolar());
	}
}

void Cola::Mostrar_V()
{
	int t;
	Cola aux(limite+1);
	while(ColaVacia() == false){
		t = Desencolar();
		cout<<"| "<<t<<" |";
		aux.Encolar(t);
	}
	LlenarCola(aux);
	cout<<"\n\n";
}

void Cola::Convertir_Lista(Lista_C *A){
	while(ColaLlena() == false){
		Encolar(A->sacarDato());
		A->mostrarLista();
	}
}

void Cola::Convertir_Pila(Pila A)
{
	if(A.PilaVacia() == false){	
		while(A.PilaVacia() == false){
			Encolar(A.Desapilar());
		}
	}
	else{
		cout<<"LA PILA ESTA VACIA";
	}
}

Cola::~Cola() { }
