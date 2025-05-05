/*
 * Crea un programa se encargue de transformar un numero
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int binario = 0;
	
	cout<<"Escriba un numero en decimal: ";	cin>>binario;	cout<<endl;
	
	while(binario != 1) {
		cout<<binario%2;
		binario /= 2;
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
