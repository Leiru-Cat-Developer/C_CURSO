/*
 * Crea una unica funcion (importante que solo sea una) que sea capaz
 * de calcular y retornar el area de un poligono.
 * - La funcion recibira por parametro solo UN poligono a la vez.
 * - Los poligonos soportados seran Triangulo, Cuadrado y Rectangulo.
 * - Imprime el calculo del area de un poligono de cada tipo.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//Clases
class Triangulo{
	private:
		int base;
		int altura;
	public:
		Triangulo(int _base, int _altura): base(_base), altura(_altura){}
		
		float area();
		void imprimirArea();
};

float Triangulo::area() {
	return (base*altura)/2;
}

void Triangulo::imprimirArea() {
	cout<<"El area del triangulo es: "<<area()<<endl;
}

class Rectangulo{
	private:
		int base;
		int altura;
	public:
		Rectangulo(int _base, int _altura): base(_base), altura(_altura){}
		
		float area();
		void imprimirArea();
};

float Rectangulo::area() {
	return (base*altura);
}

void Rectangulo::imprimirArea() {
	cout<<"El area del rectangulo es: "<<area()<<endl;
}

class Cuadrado{
	private:
		int lado;
	public:
		Cuadrado(int _lado): lado(_lado){}
		
		float area();
		void imprimirArea();
};

float Cuadrado::area() {
	return (lado*lado);
}

void Cuadrado::imprimirArea() {
	cout<<"El area del cuadrado es: "<<area()<<endl;
}

//Prototipo de funciones
float calcularArea(class n);

int main() {
	
	system("pause");
	return 0;
}

//Definicion de funciones
float calcularArea(class n) {
	
}
