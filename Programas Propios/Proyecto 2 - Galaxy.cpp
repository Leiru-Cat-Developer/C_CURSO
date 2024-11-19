#include<stdio.h>				//PARA USAR CARACTERES DE ASCII
#include<windows.h>				//POCISIONES PARA EL CURSOR
#include<conio.h>				//MOVERSE CON EL TECLADO

void gotoxy(int x, int y){		//FUNCION PARA MOVERSE EN LAS COORDENADAS X - Y
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);	//RECUPERAR IDENTIFICADOR DE LA CONSOLA
	COORD dwPos;							//COORDENADAS DE X - Y
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);	//CONFIGURA EL IDENTIFICADOR Y COORDENADAS
}

int main(){
	int x = 10,y = 10;					//COORDENADAS
	gotoxy(x,y); printf("*");
	bool game_over = false;					//VARIABLE PARA FINALIZAR JUEGO
	while(!game_over){						//SE EJECUTARA MIENTRAS LA VARIABLE SEA FALSA
		if(kbhit()){						//SI SE HA PRESIONADO UNA TECLA
			char key = getch();				//GUARDAR LA TECLA PRESIONADA
			gotoxy(x,y);	printf(" ");	//LIMPIAR RASTRO
			if(key == 'w') y--;//ARRIBA
			if(key == 's') y++;//ABAJO
			if(key == 'a') x--;//IZQUIERDA
			if(key == 'd') x++;//DERECHA
			gotoxy(x,y); printf("*");
		}
		Sleep(30);		//DETENER LA EJECUCION POR 30 MS
	}
	return 0;
}
