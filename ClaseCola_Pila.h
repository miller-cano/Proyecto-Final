#include <iostream>
#include "ClaseListaCircular.h"
#include "ClaseLista.h"

using namespace std;

class Pila{
	private:
		int limite;
		int tope;
		int *vector;
		
	public:
		Pila(int n);
		int GetLimite();
		void SetLimite(int l);
		int GetTope();
		void SetTope(int t);
		int GetVector();
		void SetVector(int i);
		void Apilar(int d);
		int Desapilar();
		bool PilaLlena();
		bool PilaVacia();
		void LlenarPila(Pila A);
		void Mostrar();
		void InvertirPila();
		void ConvertirLista(Lista *);
		~Pila();
		friend class Cola;
};

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
		void Mostrar();
		void Convertir_Lista(Lista_C *);
		void ConvertirCola(Pila *A);
		void Convertir_Pila(Pila *);
		void IntercalarColas(Cola A, Cola B);
		~Cola();
		friend class Pila;
};


