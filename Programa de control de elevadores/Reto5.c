#include<stdio.h>
/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

int nivelOrigen, nivelDestino, numeroNiveles; 
float consumo = 7.5, consumoTotal;

int main() { 
	printf("Programa de control de elevadores\n"); //Titulo del programa
	printf("Dame el nivel de origen\n"); // Solicita el nivel de origen
	scanf("%i",&nivelOrigen); //recibe el nivel de origen
	printf("Dame el nivel de destino\n"); // Solicita el nivel de destino
	scanf("%i",&nivelDestino); //recibe el nivel de destino
	printf("El elevador se movio del nivel %i al nivel %i \n", nivelOrigen, nivelDestino); //Muestra en la pantalla en que nivel comenzo y en cual termino
	numeroNiveles = nivelDestino-nivelOrigen; // Realiza la operacion de resta 
	printf("Numero de niveles: %i \n", numeroNiveles ); //muestra el resultado en la pantalla
	consumoTotal = consumo * numeroNiveles; //realiza la multiplicacion 
	printf("Consumo de %.2f kW\n", consumoTotal); //imprime el consumo total
	return 0;
}
