/*
	PEDIR AL USUARIO 2 CADENAS DE CARACTERES DE NÚMEROS, UNO ENTERO Y OTRO REAL,
	CONVERTIRLOS A SUS RESPECTIVOS VALORES Y POR ULTIMO SUMARLOS
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	char cadenaNumeroEntero[100];
	char cadenaNumeroFlotante[100];
	cout<<"DIGITE UN NÚMERO ENTERO: ";		cin.getline(cadenaNumeroEntero,100,'\n');
	cout<<"DIGITE UN NÚMERO FLOTANTE: ";	cin.getline(cadenaNumeroFlotante,100,'\n');
	//GUARDAMOS LOS VALORES PARA REALIZAR LA SUMA CON LAS FUNCIONES NECESARIAS
	int numeroEntero = atoi(cadenaNumeroEntero);
	float numeroReal = atof(cadenaNumeroFlotante), suma = numeroEntero + numeroReal;
	cout<<endl;
	cout<<"EL TOTAL DE LA SUMA ES: "<<suma<<endl<<endl;
	system("pause");
	return 0;
}
