/********************************************************************************************
* -Proyecto Final                                                                           *
* -Menu del proyecto de pilas, colas y listas                                               *
* -Grupo de trabajo: SAH, MSCA, AMP y SMJ                                                   *
* -Fecha de creacion: 04/12/2020                                                            *
* -Ultima modificacion: 15/12/2020                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "MetodosCola_Pila.h"

using namespace std;

short MENU(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t*******************************************************************************" << endl;
	cout << "\t|                                MENU PROYECTO                                |" << endl;
	cout << "\t*******************************************************************************" << endl;
	cout << "\t|  (1)  |  CONVERTIR UNA LISTA CIRCULAR CON NODO DE ENCABEZAMIENTO EN COLA    |" << endl;
	cout << "\t|  (2)  |  CONVERTIR UNA LISTA LINEAL EN PILA                                 |" << endl;
	cout << "\t|  (3)  |  INTERCALAR DOS COLAS                                               |" << endl;
	cout << "\t|  (4)  |  CONVERTIR COLA EN PILA MANTENIENDO ORDEN DE SALIDA                 |" << endl;
	cout << "\t|  (5)  |  CONVERTIR PILA EN COLA                                             |" << endl;
	cout << "\t|  (6)  |  TERMINAR                                                           |" << endl;
	cout << "\t*******************************************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 6)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;
}

short menuPunto1(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t************************************************" << endl;
	cout << "\t|               MENU EJERCICIO 1               |" << endl;
	cout << "\t************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS EN LA LISTA          |" << endl;
	cout << "\t|  (2)  |  CONVERTIR LISTA EN COLA             |" << endl;
	cout << "\t|  (3)  |  TERMINAR                            |" << endl;
	cout << "\t************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 3)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}

short menuPunto2(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t************************************************" << endl;
	cout << "\t|               MENU EJERCICIO 2               |" << endl;
	cout << "\t************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS EN LA LISTA          |" << endl;
	cout << "\t|  (2)  |  CONVERTIR LISTA EN PILA             |" << endl;
	cout << "\t|  (3)  |  TERMINAR                            |" << endl;
	cout << "\t************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 3)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}
short menuPunto3(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t************************************************" << endl;
	cout << "\t|               MENU EJERCICIO 3               |" << endl;
	cout << "\t************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS A LA COLA 1          |" << endl;
	cout << "\t|  (2)  |  INSERTAR DATOS A LA COLA 2          |" << endl;
	cout << "\t|  (3)  |  INTERCALAR COLAS                    |" << endl;
	cout << "\t|  (4)  |  TERMINAR                            |" << endl;
	cout << "\t************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 4)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}

short menuPunto4(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t************************************************************" << endl;
	cout << "\t|                     MENU EJERCICIO 4                     |" << endl;
	cout << "\t************************************************************" << endl;
	cout << "\t|  (1)  |  INGRESAR DATOS A LA COLA                        |" << endl;
	cout << "\t|  (2)  |  CONVERTIR COLA EN PILA (CON ORDEN DE SALIDA)    |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                        |" << endl;
	cout << "\t************************************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 3)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}

short menuPunto5(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t****************************************" << endl;
	cout << "\t|           MENU EJERCICIO 5           |" << endl;
	cout << "\t****************************************" << endl;
	cout << "\t|  (1)  |  INGRESAR DATOS A LA PILA    |" << endl;
	cout << "\t|  (2)  |  CONVERTIR PILA EN COLA      |" << endl;
	cout << "\t|  (3)  |  TERMINAR                    |" << endl;
	cout << "\t****************************************" << endl;
	cout << "\n";
	cout << "\tIngrese la opcion deseada: ";
	cin >> opc;
	while(opc < 1 || opc > 3)
	{
		cout << "\a";
		cout << "\n\tValor no valido, ingrese otra vez la opcion: ";
		cin >> opc;
	}
	return opc;	
}

int main(int argc, char** argv) {
	short opcion, opcionPunto;
	int x, n, d;
	do{
		opcion = MENU();
		
			switch(opcion){
				case 1:
				{
					Lista_C * LC = new Lista_C();
					do{
						opcionPunto = menuPunto1();
						switch(opcionPunto){
							
							case 1:
								LC->mostrarLista();
								cout<<"\nDATO A INSERTAR: ";cin>>d;	
								LC->insertarFinal(d);
								LC->mostrarLista();
							    system("pause");
								break;
								
							case 2: 
							{
								LC->mostrarLista();
								Cola A(LC->contarNodos());
								A.Convertir_Lista(&*LC);
								cout<<"\nLISTA CONVERTIDA A COLA:"<<endl<<endl;
								A.Mostrar();
								LC->mostrarLista();	
								system("pause");
							}
								break;
								
							case 3:
								cout<<"\n ***********************************";
								cout<<"\n |        PROCESO TERMINADO        |";
								cout<<"\n ***********************************"<<endl;
									
						}
					} 	while(opcionPunto != 3);
						system("pause");
				}
					break;
					
				case 2: 
				{
					Lista * LS = new Lista();
					do{
						opcionPunto = menuPunto2();
						switch(opcionPunto){
							
							case 1:	
								LS->mostrarLista();
								cout<<"\nDATO A INSERTAR: "; cin>>d;	
								LS->insertar(d);		
								LS->mostrarLista();
								system("pause"); 
								break;
								
							case 2:
							{
								LS->mostrarLista();
								Pila P1(LS->contar());
								P1.ConvertirLista(&*LS);
								LS->mostrarLista();
								cout<<"\nLISTA CONVERTIDA A PILA:"<<endl<<endl; 
								P1.Mostrar();
								system("pause");
							}
								break;
								
							case 3:
								cout<<"\n ***********************************";
								cout<<"\n |        PROCESO TERMINADO        |";
								cout<<"\n ***********************************"<<endl;
							
							}
					} 	while(opcionPunto != 3);
						system("pause");
				}
					break;
						
				case 3: 
				{
					cout<<"\nTAMANIO DE LA COLA 1: ";cin>>x;				
					Cola C1(x);
					cout<<"\nTAMANIO DE LA COLA 2: ";cin>>n;
					Cola C2(n);
					Cola R(x + n);
				
					do{
						opcionPunto = menuPunto3();
						
						switch (opcionPunto){
							
							case 1:
								cout<<"\nCOLA 1:"<<endl; 			
								C1.Mostrar();
								cout<<"\nINGRESE DATO A ENCOLAR: "; cin>>d;
								C1.Encolar(d);									
								cout<<"\nCOLA 1:"<<endl;
								C1.Mostrar();
								cout<<"\n";								
								system("pause");
								break;
							
							case 2: 
								cout<<"\nCOLA 2:"<<endl;			
								C2.Mostrar();								
								cout<<"\nINGRESE DATO A ENCOLAR: "; cin>>d;
								C2.Encolar(d);									
								cout<<"\nCOLA 2:"<<endl;
								C2.Mostrar();
								cout<<"\n";
								system("pause");
								break;
							
							case 3: 
								cout<<"\nCOLA 1:"<<endl;
								C1.Mostrar();								
								cout<<"\nCOLA 2:"<<endl;
								C2.Mostrar();
								
								R.IntercalarColas(&C1, &C2);
								
								cout<<"\nCOLA INTERCALADA:"<<endl;
								R.Mostrar();
								cout<<"\n";
								system("pause");
								break;
								
							case 4:
								cout<<"\n ***********************************";
								cout<<"\n |        PROCESO TERMINADO        |";
								cout<<"\n ***********************************"<<endl;
						}
			
					}	while(opcionPunto != 4);
				}	system("pause");
					break;
					
				case 4: 
				{	
					cout<<"\nTAMANIO DE LA COLA: ";cin>>n;				
					Cola C3(n);
					Pila R3(n);
					do{
						opcionPunto = menuPunto4();
						
						switch (opcionPunto){
							
							case 1: 
								cout<<"\nCOLA :"<<endl;		
								C3.Mostrar();
								cout<<"\nINGRESE DATO A ENCOLAR: "; cin>>d;
								C3.Encolar(d);								
								cout<<"\nCOLA: "<<endl;
								C3.Mostrar();
								cout<<"\n";
								system("pause");
								break;
								
							case 2: 
								cout<<"\nCOLA:"<<endl<<endl;
								C3.Mostrar();
								C3.ConvertirCola(&R3);
								cout<<"\nCOLA CONVERTIDA A PILA CON ORDEN DE SALIDA: "<<endl<<endl;
								R3.Mostrar();
								system("pause");
								break;
								
							case 3:
								cout<<"\n ***********************************";
								cout<<"\n |        PROCESO TERMINADO        |";
								cout<<"\n ***********************************"<<endl;
								
						}
			
					}	while(opcionPunto != 3);
						system("pause");
				}
					break;
				
				case 5: 
				{	
					cout<<"\nTAMANIO DE LA PILA: "; cin>>n;				
					Cola R4(n);
					Pila P4(n);
					do{
						opcionPunto = menuPunto5();
						
						switch (opcionPunto){
							
							case 1: 		
								cout<<"\nPILA:"<<endl<<endl;
								P4.Mostrar();
								cout<<"\nINGRESE EL DATO A APILAR: "; cin>>d;
								P4.Apilar(d);								
								cout<<"\nPILA:"<<endl<<endl;
								P4.Mostrar();
								system("pause");
								break;
								
							case 2: 
								cout<<"\nPILA:"<<endl;
								P4.Mostrar();
								R4.Convertir_Pila(&P4);
								cout<<"\nPILA CONVERTIDA A COLA: "<<endl<<endl;
								R4.Mostrar();
								cout<<"\n";
								system("pause");
								break;
								
							case 3:
								cout<<"\n ***********************************";
								cout<<"\n |        PROCESO TERMINADO        |";
								cout<<"\n ***********************************"<<endl;
								
						}
			
					}	while(opcionPunto != 3);
					system("pause");
				}
					break;
					
				case 6: 
					cout<<"\n **************************************************";
					cout<<"\n |           	  PROCESO TERMINADO                |";
					cout<<"\n |               HASTA LA PROXIMA!!               |";
					cout<<"\n **************************************************"<<endl;
					break;
					
		}
	} 	while(opcion != 6);
	system("pause");
	return 0;
}
