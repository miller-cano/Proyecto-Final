/********************************************************************************************
* -Proyecto Pilas, Colas y Recursividad                                                                   *
* -Grupo de trabajo:                                                         *
* -Fecha de creaciÃ³n: 04/12/2020                                                           *
* -Ãšltima modificaciÃ³n:                                                          *
* -Compilado usando TDM-GCC 4.9.2                                                           *                                                                                 *
*********************************************************************************************/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ClaseCola.h"
#include "ClasePila.h"
#include "ClaseLista.h"

using namespace std;
short MENU(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t******************************************************************************" << endl;
	cout << "\t|                                     MENU PROYECTO                            |" << endl;
	cout << "\t********************************************************************************" << endl;
	cout << "\t|  (1)  |  CONVERTIR UNA LISTA CIRCULAR CON NODO DE ENCABEZAMIENTO EN COLA     |" << endl;
	cout << "\t|  (2)  |  CONVERTIR UNA LISTA LINEAL EN PILA              			  |" << endl;
	cout << "\t|  (3)  |  INTERCALAR DOS COLAS                                  		  |" << endl;
	cout << "\t|  (4)  |  CONVERTIR COLA EN PILA MANTENIENDO ORDEN DE SALIDA                  |" << endl;
	cout << "\t|  (5)  |  CONVERTIR PILA EN COLA                                              |" << endl;
	cout << "\t|  (6)  |  TERMINAR                                                            |" << endl;
	cout << "\t********************************************************************************" << endl;
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
	cout << "\n\t****************************************************************************" << endl;
	cout << "\t|                              MENU EJERCICIO 1                            |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS EN LA LISTA                                      |" << endl;
	cout << "\t|  (2)  |  CONVERTIR LISTA EN COLA                                         |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                                        |" << endl;
	cout << "\t****************************************************************************" << endl;
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
	cout << "\n\t***********************************************************" << endl;
	cout << "\t|                       MENU EJERCICIO 2                  |" << endl;
	cout << "\t***********************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS EN LA LISTA               	     |" << endl;
	cout << "\t|  (2)  |  CONVERTIR LISTA EN PILA                        |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                       |" << endl;
	cout << "\t***********************************************************" << endl;
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
	cout << "\n\t****************************************************************************" << endl;
	cout << "\t|                         MENU EJERCICIO 3                                 |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\t|  (1)  |  INSERTAR DATOS DE LAS COLAS                                     |" << endl;
	cout << "\t|  (2)  |  COLA RESULTANTE                                                 |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                                        |" << endl;
	cout << "\t****************************************************************************" << endl;
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

short menuPunto4(){
	short opc;
	system("cls");
	system("color 20");
	cout << "\n\t****************************************************************************" << endl;
	cout << "\t|                         MENU EJERCICIO 4                                 |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\t|  (1)  |  INGRESAR DATOS A LA COLA                                        |" << endl;
	cout << "\t|  (2)  |  CONVERTIR COLA EN PILA (CON ORDEN DE SALIDA)                    |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                                        |" << endl;
	cout << "\t****************************************************************************" << endl;
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
	cout << "\n\t****************************************************************************" << endl;
	cout << "\t|                         MENU EJERCICIO 5                                 |" << endl;
	cout << "\t****************************************************************************" << endl;
	cout << "\t|  (1)  |  INGRESAR DATOS A LA PILA                                        |" << endl;
	cout << "\t|  (2)  |  CONVERTIR PILA EN COLA                                          |" << endl;
	cout << "\t|  (3)  |  TERMINAR                                                        |" << endl;
	cout << "\t****************************************************************************" << endl;
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
	short opcion,opcionPunto1, opcionPunto2,opcionPunto3,opcionPunto4,opcionPunto5;
	int Dt,Tam,Tam1,D1,TamC1,TamC2,TamC3,TamC4,TC1,TC2,TC3,TC4;
	Lista L();
	//declaracion Lista Circular
	do{
		opcion = MENU();
		
			switch(opcion){
				case 1:
					do{
						opcionPunto1 = menuPunto1();
						switch(opcionPunto1){
							case 1:
								cout<<"\nCUANTOS DATOS DESEA INSERTAR A LA LISTA :";cin>>Tam;
								
								for (i=0;i<Tam;i++){
									
								cout<<"\nINGRESE EL DATO : ";cin>>Dt;	
								//metodo insertar en una lista circular			
								}
								//mostrar lista 
							    system("pause");
								break;
								
							case 2: 
								//metodo insertar en una lista circular	
								//Metodo de contar elementos de la lista
								Cola A(/*tamaño cola*/);
								//metodo convertir lista en cola
								
								A.Mostrar();
								//metodo insertar en una lista circular	
								
								system("pause");
								break;
				
						}
					} while(opcionPunto1 != 3);
					system("pause");
					break;
				case 2: {
	
					

					do{
						opcionPunto2 = menuPunto2();
						switch(opcionPunto2){
							case 1:
								
								cout<<"\nCUANTOS DATOS DESEA INSERTAR A LA LISTA :";cin>>Tam1;
								for (i=0;i<Tam1;i++){	
									cout<<"\nINGRESE EL DATO : ";cin>>D1;	
									L.insertarFinal(D1);		
								}
								L.mostrarLista();
								system("pause"); 
								break;
							case 2: 
								L.mostrarLista();
								//metodo convertir Lista en Pila
								//metodo contar elementos de la lista
								Pila P1(/*Tamaño Pila*/);
								
								P1.mostrar();
								system("pause"); 
								break;
							
							}
					} while(opcionPunto2 != 3);
					system("pause");
					break;
					
				}
					
				case 3: {
				
					cout<<"\nTAMANIO DE LA COLA 1 : ";cin>>TamC1;				
					Cola C1(TamC1);
					cout<<"\nTAMANIO DE LA COLA 2 : ";cin>>TamC2;
					Cola C2(TamC2);
					Cola R(C1.GetLimite()+C2.GetLimite()+2);
				
					do{
						opcionPunto3 = menuPunto3();
						
						switch (opcionPunto3){
							
							case 1: 			
							
										
								cout<<"\nINGRESE DATO COLA 1:";cin>>TC1;
								C1.Encolar(TC1);								
								cout<<"\nINGRESE DATO COLA 2:";cin>>TC2;
								C2.Encolar(TC2);	
								cout<<"\nCOLA 1:"<<endl;
								C1.Mostrar();								
								cout<<"\nCOLA 2:"<<endl;
								C2.Mostrar();
								system("pause");break;
							
							case 2: 
							
								cout<<"\nCOLA 1:"<<endl;
								C1.Mostrar();								
								cout<<"\nCOLA 2:"<<endl;
								C2.Mostrar();
								
								R.IntercalarColas(C1,C2);
								
								cout<<"\nCOLA 1:"<<endl;
								C1.Mostrar();								
								cout<<"\nCOLA 2:"<<endl;
								C2.Mostrar();
								cout<<"\nCOLA RESULTANTE:"<<endl;
								R.Mostrar();
								
								system("pause");break;
								
						}
			
					}while(opcionPunto3 != 3);
				}system("pause");break;
					
				case 4: {
					
					cout<<"\nTAMANIO DE LA COLA: ";cin>>TamC3;				
					Cola C3(TamC3);
					Pila R3(TamC3);
					do{
						opcionPunto4 = menuPunto4();
						
						switch (opcionPunto4){
							
							case 1: 		
		
								cout<<"\nINGRESE DATO A LA COLA :";cin>>TC3;
								C3.Encolar(TC3);								
								cout<<"\nCOLA :"<<endl;
								C3.Mostrar();
								
								system("pause");break;
							case 2: 
								C3.Mostrar();
								
								//metodo convertir cola en pila
								
								R3.mostrar();
								
								system("pause");break;
								
						}
			
					}while(opcionPunto3 != 3);
					system("pause");break;
				
					
					
					
				}
				system("pause");break;
				
				case 5: 
				
				{
					
					cout<<"\nTAMANIO DE LA PILA: ";cin>>TamC4;				
					Cola C4(TamC4);
					Pila R4(TamC4);
					do{
						opcionPunto5 = menuPunto5();
						
						switch (opcionPunto5){
							
							case 1: 		
		
								cout<<"\nINGRESE DATO A LA PILA :";cin>>TC4;
								R4.Apilar(TC4);								
								cout<<"\n PILA:"<<endl;
								R4.mostrar();
								
								system("pause");break;
							case 2: 
								R4.mostrar();
								
								//metodo convertir Pila en Cola
								
								R4.mostrar();
								
								system("pause");break;
								
						}
			
					}while(opcionPunto3 != 3);
					system("pause");break;
					opcionPunto5 = menuPunto5();
					
					
					
					system("pause");break;
				case 6: 
					cout<<"\n **************************************************";
					cout<<"\n |           	  PROCESO TERMINADO                |";
					cout<<"\n |               HASTA LA PROXIMA!!               |";
					cout<<"\n **************************************************"<<endl;
					break;
		}
	} while(opcion != 6);
	system("pause");break;
	return 0;
}
