#include <stdio.h>
/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

int nivelOrigen, nivelDestino, numeroNiveles, contPersonas, totalPersonas, nivelActual, idElevador;
int elevadores[5][2]= {
		{0,0},
		{0,0},
		{0,0},
		{0,0},
		{0,0}
	};
float consumo = 7.5, consumoTotal, pesoPersona, capacidadElevador = 0;
char finPrograma;

int main() { 
	printf("Programa de control de elevadores\n");
	printf("%cDesea ejecutar el programa [S/N]?\n",168);
	scanf("%string",&finPrograma);	 
	while (toupper(finPrograma)== 'S'){
		system("cls"); 
		printf("Programa de control de elevadores\n");
		printf("Digite el n%cmero del elevador [1-5]: ",163);
		scanf("%i", &idElevador);
		printf("Dame el nivel de origen\n"); 
		scanf("%i",&nivelOrigen); 
		if(nivelActual>-1){
			printf("El elevador esta en el piso: %i Espere su llegada\n", elevadores[idElevador-1][0]);
			while (elevadores[idElevador-1][0]!=nivelOrigen){		
				if(elevadores[idElevador-1][0]<nivelOrigen) {
					elevadores[idElevador-1][0]++;
					printf("El elevador esta en el piso: %i\n",elevadores[idElevador-1][0]);
				} else {
					elevadores[idElevador-1][0]--;
					printf("El elevador esta en el piso: %i\n",elevadores[idElevador-1]);
				}
			}
		}
		printf("Abriendo puertas\n");
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
			do {
				printf("Panel de control\n");
				printf("Piso 0\n");
				printf("Piso 1\n");
				printf("Piso 2\n");
				printf("Piso 3\n");
				printf("Piso 4\n");
				printf("Piso 5\n");
				printf("6 Boton de emergencia\n");
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
				    case 5 : printf("Bot%cn Piso 5 presionado\n",162);
				    break;
				    case 6 : printf("Bot%cn de emergencia presionado\n",162);
				    break;
				    default: printf("No se presion%c un bot%cn v%clido.\nVuelva a intentarlo.\n",162,162,160);
	                break;
				}
			} while (nivelDestino < 0 || nivelDestino >6 );
			if(nivelDestino==6){
				printf("El elevador %i fue desactivado\n", idElevador);
				elevadores[idElevador-1][1];	
			}
			else{
				printf("El elevador se movio del nivel %i al nivel %i \n", nivelOrigen, nivelDestino); //		
				numeroNiveles = nivelDestino-nivelOrigen;
				printf("Numero de niveles: %i \n", numeroNiveles );
				if (nivelDestino>nivelOrigen) {
					consumoTotal = numeroNiveles * 7.5; 
				}
				else {
					consumoTotal = 0;
				}
				nivelActual=nivelDestino;
				printf("Consumo de %.2f kW\n", consumoTotal);
				printf("Carga del elevador %.2f \n", capacidadElevador);
				capacidadElevador = 0;
			}
		}
		printf("%cDesea volver a ejecutar el programa [S/N]?\n",168);
		scanf("%string",&finPrograma);
	}	
	return 0;
}
