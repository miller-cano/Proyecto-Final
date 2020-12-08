#include <iostream>
#include "ClaseCola_Pila.h"

using namespace std;

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

void Cola::Mostrar()
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

void Cola::Convertir_Pila(Pila *A)
{
	if(A->PilaVacia() == false){	
		while(A->PilaVacia() == false){
			Encolar(A->Desapilar());
		}
	}
	else{
		cout<<"LA PILA ESTA VACIA";
	}
}

void Cola::ConvertirCola(Pila *A)
{
	while (A->PilaLlena() == false){
		A->Apilar(Desencolar());
	}
	
	A->InvertirPila();
}

void Cola::IntercalarColas (Cola A, Cola B)
{
	Cola AuxA(A.GetLimite()+1);
	Cola AuxB(B.GetLimite()+1);
	int r,d;	
	if (A.ColaVacia() == false || B.ColaVacia() == false){
		while (A.ColaVacia() == false && B.ColaVacia() == false){		
			r = A.Desencolar();
			d = B.Desencolar();	
			Encolar(r);
			Encolar(d);
			AuxA.Encolar(r);
			AuxB.Encolar(d);
		}
	
		while(A.ColaVacia() == false){
			r = A.Desencolar();
			Encolar(r);
		}
		
		while(B.ColaVacia() == false){
			d = B.Desencolar();
			Encolar(d);
		}
		A.LlenarCola(AuxA);
		B.LlenarCola(AuxB);
	}
	else{
		cout<<"\nLAS COLAS ESTAN VACIAS"<<endl;
	}
}

Cola::~Cola() { }

Pila::Pila(int n)
{
	limite = n-1;
	tope = -1;
	vector = new int(n);
}

int Pila::Pila::GetLimite()
{
	return limite;
}

void Pila::SetLimite(int l)
{
	limite = l;
}

int Pila::GetTope()
{
	return tope;
}

void Pila::SetTope(int t)
{
	tope = t;
}

int Pila::GetVector()
{
	return vector[limite];
}

void Pila::SetVector(int i)
{
	vector[limite] = i;
}
		
		
bool Pila::PilaLlena()
{
	bool band = false;
	if(tope == limite){
		band = true;
	}
	return band;
}

bool Pila::PilaVacia()
{
	bool band = false;
	if(tope == -1){
		band = true;
	}
	return band;
}

void Pila::Apilar(int d)
{
	bool llena;
	llena = PilaLlena();
	if(llena == false){
		tope++;
		vector[tope] = d;
		//cout<<"\nDATO INSERTADO A LA PILA"<<endl;
	}
		else if(llena == true){
			//cout<<"\nLA PILA ESTA LLENA"<<endl;
		}
}

int Pila::Desapilar()
{
	int d;
	bool vacia;
	vacia = PilaVacia();
	if(vacia == false){
		d = vector[tope];
		tope--;
	}
		else if(vacia == true){
		//	cout<<"\nLA PILA ESTA VACIA"<<endl;
		}
	return d;
}


void Pila::LlenarPila(Pila A)
{
	while(A.PilaVacia() == false){
		Apilar(A.Desapilar());
	}
}

void Pila::Mostrar()
{
	int v;
	Pila aux(limite+1);
	while(PilaVacia() == false){
		v = Desapilar();
		cout<<"| "<<v<<" |"<<endl;
		cout<<"------"<<endl;
		aux.Apilar(v);
	}
	LlenarPila(aux);
	cout<<"\n";
}

void Pila::InvertirPila()
{
	int v;
	Pila aux(limite+1), aux2(limite+1);
	while(PilaVacia() == false){
		v = Desapilar();
		aux.Apilar(v);
	}
	while(aux.PilaVacia() == false){
		v = aux.Desapilar();
		aux2.Apilar(v);
	}
	LlenarPila(aux2);
}

Pila::~Pila() { }
