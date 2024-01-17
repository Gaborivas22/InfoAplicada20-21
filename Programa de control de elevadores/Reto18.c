/*
Este programa fue creado por gabriel rivas 
si lo copias recuerda borrar este cacho o cambiarle el nombre jejej
*/

//declaracion de librerias
#include <stdio.h>

//declaracion de variables
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

int main() 
{ 
	//Incio del programa
	printf("Programa de control de elevadores\n");

	//dependiendo de la respuesta se ejecuta el programa o no
	printf("%cDesea ejecutar el programa [S/N]?\n",168);
	scanf("%string",&finPrograma);	 
	while (toupper(finPrograma)== 'S')
	{
	
		system("cls"); //limpieza de pantalla
		printf("Programa de control de elevadores\n");
		
		// numero de elevador
		printf("Digite el n%cmero del elevador [1-5]: ",163); 
		scanf("%i", &idElevador);
		
		//solicita nivel de origen
		printf("Dame el nivel de origen\n"); 
		scanf("%i",&nivelOrigen); 
		
		//aviso de cuantos niveles se mueve en pantalla
		if(nivelActual>-1)
		{
			printf("El elevador esta en el piso: %i Espere su llegada\n", elevadores[idElevador-1][0]);
			while (elevadores[idElevador-1][0]!=nivelOrigen){
				
				if(elevadores[idElevador-1][0]<nivelOrigen) 
				{
					elevadores[idElevador-1][0]++;
					printf("El elevador esta en el piso: %i\n",elevadores[idElevador-1][0]);
				} 
				else 
				{
					elevadores[idElevador-1][0]--;
					printf("El elevador esta en el piso: %i\n",elevadores[idElevador-1]);
				}
			}
		}
		printf("Abriendo puertas\n");
		
		//calculo del peso del total del personas para no exceder el peso
		printf("Dame el total de personas\n");
		scanf("%i",&totalPersonas);
		for (contPersonas=1; contPersonas<=totalPersonas; contPersonas+=1) 
		{
			printf("Dame el peso de la persona %i\n",contPersonas);
			scanf("%f",&pesoPersona);
			capacidadElevador = capacidadElevador+pesoPersona;
		}
		if(totalPersonas==0)
		{
			printf("no hay gente en el elevador\n");	
		}
		else
		{
			if(capacidadElevador>=300)
			{
				printf("Capaciadad del elevador %f \n", capacidadElevador);
				printf("Se ha excedido la capacidad maxima del elevador\n");
				return 0;
			}
			do 
			{
				//solicitud del nivel del elevador
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
				switch (nivelDestino) 
				{
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
			
			//desactivacion del elevador si el boton de emergencia fue presionado
			if(nivelDestino==6)
			{
				printf("El elevador %i fue desactivado\n", idElevador);
				elevadores[idElevador-1][1];
			}
			else
			{
				//muestra de que nivel a que nivel se movio el elevador
				printf("El elevador se movio del nivel %i al nivel %i \n", nivelOrigen, nivelDestino); //
				
				//calcula cuantos niveles se movio
				numeroNiveles = nivelDestino-nivelOrigen;
				printf("Numero de niveles: %i \n", numeroNiveles );
				
				//calculo kw por nivel
				if (nivelDestino>nivelOrigen) 
				{
					consumoTotal = numeroNiveles * 7.5; 
				}
				else 
				{
					consumoTotal = 0;
				}
				nivelActual=nivelDestino;
				printf("Consumo de %f kW\n", consumoTotal);
				
				//muestra la carga del elevador
				printf("Carga del elevador %f \n", capacidadElevador);
				capacidadElevador = 0;
				}
			}
			//pregunta si desea volver a ejecutar el programa
			printf("%cDesea volver a ejecutar el programa [S/N]?\n",168);
			scanf("%string",&finPrograma);
	}	
	return 0;
}
