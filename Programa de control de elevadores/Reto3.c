#include<stdio.h>
/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiale jejej
*/

int nivelOrigen;
int nivelDestino;
int main() { 
	printf("Programa de control de elevadores\n");
	printf("Dame el nivel de origen\n");
	scanf("%i",&nivelOrigen);
	printf("Dame el nivel de destino\n");
	scanf("%i",&nivelDestino);
	printf("El elevador se movio del nivel %i al nivel %i \n", nivelOrigen, nivelDestino);
	return 0;
}
