/*
	ORDENACI�N SHELL [ORDENAMIENTO POR INSERCI�N CON INCREMENTOS DECRECIENTES]
	
		CADA ELEMENTO SE COMPARA CON LOS ELEMENTOS CONTIGUOS DE SU IZQUIERDA, UNO TRAS OTRO.
		SI EL ELEMENTO A INSERTAR ES EL M�S PEQUE�O HAY QUE REALIZAR MUCHAS COMPARACIONES
		ANTES DE COLOCARLO EN SU LUGAR DEFINITIVO.
		
		EL ALGORITMO DE SHELL MODIFICA LOS SALTOS CONTIGUOS POR SALTOS DE MAYOR TAMA�O Y CON
		ELLO CONSIGUE QUE LA ORDENACI�N SEA M�S R�PIDA.
		
		GENERALMENTE, SE TOMA COMO SALTO INICIAL (N/2), SIENDO 'N' EL N�MERO DE ELEMENTOS.
		LUEGO EN CADA ITERACI�N SE REDUCE EL SALTO A LA MITAD, HASTA QUE EL SALTO ES DE
		TAMA�O 1.
		
		PASOS A SEGUIR:
		
		1. SE DIVIDE LA LISTA ORIGINAL EN (N/2) GRUPOS DE DOS, CONSIDERANDO UN INCREMENTO
		O SALTO ENTRE LOS ELEMENTOS DE (N/2)
		
		2. SE CLASIFICA CADA GRUPO POR SEPARADO, COMPARANDO LAS PAREJAS DE ELEMENTOS Y SI NO
		EST�N ORDENADOS SE INTERCAMBIAN
		
		3. SE DIVIDE AHORA LA LISTA EN LA MIDAD DE GRUPOS (N/4) CON UN SALTO ENTRE LOS
		ELEMENTOS TAMBI�N MITAD (N/4) Y NUEVAMENTE SE CLASIFICA CADA GRUPO POR SEPARADO
		
		4. AS� SUCESIVAMENTE, SE SIGUE DIVIDIENDO LA LISTA EN LA MITAD DE GRUPOS QUE EN 
		EL RECORRIDO ANTERIOR CON UN SALTO DECRECIENTE EN LA MITAD QUE EL SALTO ANTERIOR,
		Y LUEGO CLASIFICANDO CADA GRUPO POR SEPARADO
		
		5. EL ALGORITMO TERMINA CUANDO EL TAMA�O DEL SALTO ES 1
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//INTERCAMBIO DE N�MEROS PARA EL ALGORITMO DE SHELL [39 - 44]
void intercambioDeNumerosAlgoritmoShell(int &x, int &y){
	int auxiliar = 0;
	auxiliar = x;
	x = y;
	y = auxiliar;
}
//ALGORITMO DE SHELL [46 - 66]
void algoritmoOrdenamientoShell(int arreglo[], int numeroDeElementosDelArrelo){
	//PARA ESTE ALGORIMOS UTILIZAREMOS UNA FUNCI�N PARA QUE SEA M�S SENCILLO
	//EL ARREGLO PUEDE SER TANTO DE TIPO ENTERO, FLOTANTE O DOBLE
	int salto = 0, i = 0, j = 0, k = 0;
	salto = numeroDeElementosDelArrelo/2;
	while(salto > 0){
		for(i=salto; i<numeroDeElementosDelArrelo; i++){
			j = i - salto;
			while(j >= 0){
				k = j + salto;
				if(arreglo[j] <= arreglo[k]){	//PAR DE ELEMENTOS ORDENADOS
					j = -1;
				}else{	//PAR DE ELEMENTOS DESORDENADOS
					intercambioDeNumerosAlgoritmoShell(arreglo[j],arreglo[k]);
					j -= salto;
				}
			}
		}
		salto = salto/2;
	}
}
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int arreglo[] = {4,6,1,9,5,10,2,11,19,7};	//ARREGLO DE 10 POCISIONES
	algoritmoOrdenamientoShell(arreglo,10);		//LLAMAMOS A LA FUNCI�N DE ORDENAMIENTO Y PASAMOS PARAMETROS
	//IMPRESI�N DE DATOS [72 - 80]
	cout<<"ARREGLO ORDENADO ASCENDENTEMENTE"<<endl<<endl;
	for(int i=0; i<10; i++){
		cout<<"POCISI�N ["<<i<<"]: "<<arreglo[i]<<endl;
	}
	cout<<endl;
	cout<<"ARREGLO ORDENADO DESCENDENTEMENTE"<<endl<<endl;
	for(int i=9; i>=0; i--){
		cout<<"POCISI�N ["<<i<<"]: "<<arreglo[i]<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
