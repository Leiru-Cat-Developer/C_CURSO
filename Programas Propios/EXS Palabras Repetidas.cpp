/*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuacion no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayusculas y minusculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automaticamente.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
	char frase[100];
	int longitudFrase;
	
	int palabrasFraseIterador = 0;
	int contadorPalabras = 0;
	int conteo[100];
	string palabrasFrase[100];
	string conteoDePalabras[100];
	
	cout<<"Digite una frase: ";		cin.getline(frase,100,'\n');	cout<<endl;
	longitudFrase = strlen(frase);		//Guarda la longitud
	strupr(frase);						//Convierte en mayusculas
	
	for(int i=0; i<=longitudFrase; i++) {
		//Recorre la frase y las guarda en un arreglo de STRING cada palabra
		if ((frase[i] == ',') || (frase[i] == '.') || (frase[i] == ' ') || (i==longitudFrase)) {
			for(int j=i-contadorPalabras; j<i; j++) {
				palabrasFrase[palabrasFraseIterador] += frase[j];
			}
			palabrasFraseIterador++;
			contadorPalabras = 0;
		}else {
			contadorPalabras++;
		}
	}
	
	for(int i=0; i<palabrasFraseIterador; i++) {
		conteo[i] = 0;
		
		for (int j=0; j<palabrasFraseIterador; j++) {
			if(palabrasFrase[i] == palabrasFrase[j]){
				conteo[i]++;
			}
		}
		
		if ((palabrasFrase[i] == ",") || (palabrasFrase[i] == " ") || (palabrasFrase[i] == ".")) {
			//NO IMPRIME NADA
		}else {
			cout<<palabrasFrase[i]<<": "<<conteo[i]<<" veces"<<endl;
		}
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
