#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	int kg=0, mto=0, bono=0, dias=0,kgt=0,mayor=0,menor=10000,diamay=0,diamen=0;
	char opc=' ';
	
	printf("ingrese la cantidad de dias q tiene el mes\n");
	scanf("%d",&dias);
	
	for(int i=0; i<dias; i++){
		printf("ingrese la cantidad kilos de helado vendidos en el dia\n");
		scanf("%d",&kg);
		
		kgt +=kg;
		
		
		if (mayor<kg){
			mayor=kg;
			diamay=(i+1);
		}
		if (menor>kg){
			menor=kg;
			diamen=(i+1);
		}
	}
	mto=mto*(kgt*500);
	

	
	while(opc!='s'){
		
		printf("\n\n\tMENU DE OPCIONES\n");
		printf("a. Total de kilos de helado vendidos en un mes.\nb. Monto recaudado en un mes, siendo que el kilo cuesta $500.\n");
		printf("c. El n mero de dia del mes que se vendio mas y cuantos kilos se vendieron.\nd. El umero de dia del mes que se vendio menos y cuantos kilos se vendieron.");
		printf("\ne. Mostrar si los empleados reciben o no el bono adicional\nOpcion: ");
		scanf(" %c", &opc);
		
		switch(opc){
		case 'a':
			printf("el total de kilos vendidos en el mes es: %d\n",kgt);
			break;
		
		case 'b':
			printf("el monto total es de: %d\n",mto);
			break;
		case 'c':
			printf("la cantidad y dia q mas se vendio fue:%d %d\n",mayor, diamay);
			break;
		case 'd':
			printf("la cantidad y dia q menos se vendio fue:%d %d\n",menor, diamen);
			break;
		case 'e':
			if (kgt>5000){
				printf("\nlos empleados reciben el bono\n");
			}
			else{
				printf("\nlos empleados no reciben el bono\n");
			}
			break;
		case 's':
			printf("\nsalio del menu de opciones\n");
			break;
		}
		//if (opc='s'){
		//	printf("\nsalio del menu de opciones\n");
		//} tambien se puede asi xd
	}
	
	

	return 0;
}
