#include<stdio.h>
/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

int nivelOrigen, nivelDestino, numeroNiveles, contPersonas, totalPersonas;
float consumo = 7.5, consumoTotal, pesoPersona, capacidadElevador = 0;

int main() { 
	printf("Programa de control de elevadores\n"); //Titulo del programa
	printf("Dame el nivel de origen\n"); // Solicita el nivel de origen
	scanf("%i",&nivelOrigen); //recibe el nivel de origen
	printf("Dame el total de personas\n");
	scanf("%i",&totalPersonas);
	for (contPersonas=1; contPersonas<=totalPersonas; contPersonas+=1) {
		printf("Dame el peso de la persona %i\n",contPersonas);
		scanf("%f",&pesoPersona);
		capacidadElevador = capacidadElevador+pesoPersona;
	}
	printf("Dame el nivel de destino\n"); // Solicita el nivel de destino
	scanf("%i",&nivelDestino); //recibe el nivel de destino
	printf("El elevador se movio del nivel %i al nivel %i \n", nivelOrigen, nivelDestino); 
	numeroNiveles = nivelDestino-nivelOrigen;
	printf("Numero de niveles: %i \n", numeroNiveles );
	if (nivelDestino>nivelOrigen){
		consumoTotal = numeroNiveles * 7.5; 
	}
	else {
		consumoTotal = 0;
	}
	printf("Consumo de %.2f kW\n", consumoTotal);	
	printf("Capaciadad del elevador %.2f \n", capacidadElevador);
	return 0;
}
