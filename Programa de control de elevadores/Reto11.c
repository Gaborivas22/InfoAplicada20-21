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
	if(totalPersonas==0){
		printf("no hay gente en el elevador\n");	
	}
	else{
		if(capacidadElevador>=300){
			printf("Capaciadad del elevador %f \n", capacidadElevador);
			printf("Se ha excedido la capacidad maxima del elevador\n");
			return 0;
		}
		printf("Panel de control\n");
		printf("Piso 0\n");
		printf("Piso 1\n");
		printf("Piso 2\n");
		printf("Piso 3\n");
		printf("Piso 4\n");
		printf("Piso 5\n");
		printf("Seleccione el piso: ");
		scanf("%i",&nivelDestino);
		switch (nivelDestino) {
		      case 0 : printf("Bot%cn Piso 0 presionado\n",162);
		            break;
		      case 1 : printf("Bot%cn Piso 1 presionado\n",162);
		            break;
		      case 2 : printf("Bot%cn Piso 2 presionado\n",162);
		            break;
		      case 3 : printf("Bot%cn Piso 3 presionado\n",162);
		            break;
		      case 4 : printf("Bot%cn Piso 4 presionado\n",162);
		            break;
	}		
		printf("El elevador se movio del nivel %i al nivel %i \n", nivelOrigen, nivelDestino); //	
		numeroNiveles = nivelDestino-nivelOrigen;
		printf("Numero de niveles: %i \n", numeroNiveles );	
		if (nivelDestino>nivelOrigen) {
			consumoTotal = numeroNiveles * 7.5; 
		}
		else {
			consumoTotal = 0;
		}
		printf("Consumo de %.2f kW\n", consumoTotal);
	}		
	return 0;
}
