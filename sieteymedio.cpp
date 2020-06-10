/*siete y medio*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

float tiradacarta(void);
float acumularpuntuacion(float cartasacada, float acumulado);
int sehapasado(float acumulado);
void ganador (float acumula_jugador, float acumula_banca);

main(){
	
	float carta_jug, carta_banca;
	float acum_jug, acum_banca;
	int continuar=1;
	
	srand(time(NULL));
	
	do{
		carta_jug=tiradacarta();
		carta_banca=tiradacarta();
	
		acum_jug=acumularpuntuacion(carta_jug, acum_jug);
		acum_banca=acumularpuntuacion(carta_banca, acum_banca);
		
		printf("\nPuntuacion jugador: %.2f", acum_jug);
		printf("\nPuntuacion banca: %.2f", acum_banca);
		
		if(continuar=sehapasado(acum_jug)==1){
			break;			
		}
		else if(continuar=sehapasado(acum_banca)==1){
			break;
		}
		else if(continuar=sehapasado(acum_jug)==0){
			printf("\nQuieres seguir? (0. SI/1. NO)");
			scanf("%d", &continuar);
		}


	}while(continuar==0);
	
	ganador(acum_jug, acum_banca);
	

}

float tiradacarta(){
	
	float carta;
	float figura;
	
	figura = 0.5;
		
	carta=rand()%12+1;
	
	if(carta <8){
		return carta;
	}
	else if(carta >=10 && carta <=12){
		return figura;
	}
}

float acumularpuntuacion(float cartasacada, float acumulado){
	
	acumulado;
	
	acumulado=acumulado+cartasacada;		
	
	return acumulado;
}

int sehapasado(float acumulado){
	
	if(acumulado <= 7.5){
		return 0;
	}
	if(acumulado >7.5){
		return 1;
	}
}

void ganador (float acumula_jugador, float acumula_banca){
	
	if(acumula_jugador > 7.5){
		printf("\nHAS PERDIDO...");
	}
	else if(acumula_banca > 7.5){
		printf("\nHAS GANADO!!!!");
	}
}
