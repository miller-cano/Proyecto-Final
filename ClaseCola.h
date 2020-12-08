#include <iostream>

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
		int GetVectorTope();
		void SetVector(int i);
		void SetVectorTope(int i);
		void Encolar(int d);
		int Desencolar();
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola A);
		void Mostrar();
		void InvertirCola(); 
		void IntercalarColas(Cola A, Cola B);
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

int Cola::GetVectorTope()
{
	return vector[tope];
}

void Cola::SetVector(int i)
{
	vector[0] = i;
}

void Cola::SetVectorTope(int i)
{
	vector[tope] = i;
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
	bool llena;
	llena = ColaLlena();
	if(llena == false){
		tope++;
		vector[tope] = d;
 	}
		else if(llena == true){
		//	cout<<"\nLA COLA ESTA LLENA"<<endl;
		}
}

int Cola::Desencolar()
{
	int d, i = 1;
	bool vacia;
	vacia = ColaVacia();
	if(vacia == false){
		d = vector[0];
		while(i <= tope){
			vector[i-1] = vector[i];
			i++;
		}
		tope--;
	}
		else if(vacia == true){
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
		cout<<"| "<<t<<" |"<<endl;
		cout<<"------"<<endl;
		aux.Encolar(t);
	}
	LlenarCola(aux);
	cout<<"\n";
}

void Cola::InvertirCola()
{
	int v;
	Cola aux(limite+1), aux2(limite+1);
	while(ColaVacia() == false){
		v = Desencolar();
		aux.Apilar(v);
	}
	while(aux.ColaVacia() == false){
		aux2.Encolar(aux.Desapilar());
	}
	LlenarCola(aux2);
	cout<<"\nCOLA INVERTIDA"<<endl;
}

void Cola::IntercalarColas (Cola A, Cola B){
	
	Cola AuxA(A.GetLimite()+1);
	Cola AuxB(B.GetLimite()+1);
	int r,d;
	
	
	if (A.ColaVacia() == false && B.ColaVacia() == false){
		
		while (A.ColaVacia() == false && B.ColaVacia() == false){
		
			r = A.Desencolar();
			d = B.Desencolar();	
			Encolar(r);
			Encolar(d);
			AuxA.Encolar(r);
			AuxB.Encolar(d);
			
		}
		
		}else if (A.ColaVacia() == false){
		
			while(A.ColaVacia() == false){
		
			r = A.Desencolar();
			Encolar(r);
		}
			}else if(B.ColaVacia() == false){
			
				while(B.ColaVacia() == false){
		
				d = B.Desencolar();
				Encolar(d);
				}
			}else cout<<"\nProceso Terminado";
	
	
	A.LlenarCola(AuxA);
	B.LlenarCola(AuxB);
	

}
Cola::~Cola() { }
