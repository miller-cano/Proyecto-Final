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
		void Apilar(int d);
		void InsertarOrdenado(int d);
		void Ordenar();
		int Desapilar();
		bool ColaLlena();
		bool ColaVacia();
		void LlenarCola(Cola A);
		void Mostrar();
		void InvertirCola(); 
		void BuscarDato(int d);
		void EliminarDato(int d);
		void ReemplazarDato(int d, int x);
		void SumarColas(Cola A, Cola B);
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

void Cola::Apilar(int d)
{
	bool llena;
	llena = ColaLlena();
	if(llena == false){
		tope++;
		vector[tope] = d;
	}
}

int Cola::Desapilar()
{
	int d;
	bool vacia;
	vacia = ColaVacia();
	if(vacia == false){
		d = vector[tope];
		tope--;
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

void Cola::BuscarDato(int d)
{
	Cola aux(limite+1);
	int band = 0, v;
	while(ColaVacia() == false){
		v = Desencolar();
		if(d == v){
			cout<<"\nEL DATO ["<<d<<"] FUE ENCONTRADO EN LA COLA"<<endl;
			band = 1;	
		}
		aux.Encolar(v);
	}
	LlenarCola(aux);
	if(band == 0){
		cout<<"\nEL DATO NO FUE ENCONTRADO EN LA COLA"<<endl;
	}
}

void Cola::EliminarDato(int d)
{
	Cola aux(limite+1);
	int band = 0, v;
	while(ColaVacia() == false){
		v = Desencolar();
		if(d == v){
			cout<<"\nEL DATO ["<<d<<"] FUE ELIMINADO DE LA COLA"<<endl;
			band = 1;	
		}
		else{
			aux.Encolar(v);
		}
	}
	LlenarCola(aux);
	if(band == 0){
		cout<<"\nEL DATO NO FUE ENCONTRADO PARA ELIMINAR EN LA COLA"<<endl;
	}
}

void Cola::ReemplazarDato(int d, int x)
{
	Cola aux(limite+1);
	int band = 0, v;
	while(ColaVacia() == false){
		v = Desencolar();
		if(d == v){
			v = x;
			cout<<"\nEL DATO ["<<d<<"] FUE ENCONTRADO EN LA COLA Y SE REEMPLAZO POR ["<<x<<"]"<<endl;
			band = 1;	
		}
		aux.Encolar(v);
	}
	LlenarCola(aux);
	if(band == 0){
		cout<<"\nEL DATO NO FUE ENCONTRADO EN LA COLA PARA REEMPLAZAR"<<endl;
	}
	
}

void Cola::SumarColas(Cola A, Cola B)
{
	int a = 0, b = 0;
	Cola aux(limite+1), aux1(limite+1);
	while(ColaLlena() == false){
		while(A.ColaVacia() == false && B.ColaVacia() == false){
			a = A.Desencolar();
			b = B.Desencolar();
			Encolar(a+b);
			aux.Encolar(a);
			aux1.Encolar(b);
		}
		
		while(A.ColaVacia() == false){
			a = A.Desencolar();
			Encolar(a);
			aux.Encolar(a);
		}
		while(B.ColaVacia() == false){
			b = B.Desencolar();
			Encolar(b);
			aux1.Encolar(b);
		}
		A.LlenarCola(aux);
		B.LlenarCola(aux1);			
	}
	cout<<"\nCOLAS SUMADAS"<<endl;
}

void Cola::Ordenar(){
	Cola aux(limite+1), aux2(limite+1);
	int v = 0, menor = 0, r = 0, b = 0;
	while(ColaVacia() == false || aux.ColaVacia() == false){
		r = Desencolar();
		while(ColaVacia() == false){
			v = Desencolar();
			if(v > r){
				aux.Encolar(v);
				menor = r;
			}
			else{
				aux.Encolar(r);
				menor = v;
				r = v;
			}
			b = 1;
		}
		if(b == 0){
			menor = r;
		}
		else if(aux.ColaVacia() == false){
			LlenarCola(aux);
			while(aux.ColaVacia() == false){ //Para vaciar la cola auxiliar, ya que cuando se manda, se manda es por valor
				v = aux.Desencolar();
			}
		}
		aux2.Encolar(menor);
		b = 0;
	}
	LlenarCola(aux2);
	cout<<"\nCOLA ORDENADA"<<endl;
}

void Cola::InsertarOrdenado(int d){
	Ordenar(); //Para insertar ordenado, debe de estar ordenado, entonces para evitar fallos, la ordenamos antes
	Cola aux(limite+1);
	if(ColaVacia() == true){
		Encolar(d);
	}
		else if(GetVectorTope() <= d){
			Encolar(d);
		}
			else{
				while(ColaVacia() == false){
					aux.Encolar(Desencolar());
				}
				while(aux.ColaVacia() == false){
					if(aux.GetVector() < d){
						Encolar(aux.Desencolar());
					}
					else{
						Encolar(d);
						Encolar(aux.Desencolar());
					}	
				}
			}
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
