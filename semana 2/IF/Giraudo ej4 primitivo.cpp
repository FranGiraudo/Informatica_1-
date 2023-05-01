#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int e=0, i=0, v=0, b=0;
	printf("ingrese su edad:");
	scanf("%d",&e);
	printf("cuanto es su ingreso mensual:");
	scanf("%d",&i);
	
	if (e>=25){
		v=1;
	}
	else{
		v=1;
	}
	if (i>=200000){
		b=1;
	}
	else{
		b=0;
	}
	if (b+v==2){
		printf("usted tiene que tributar");
	}
	else{
		printf("usted no tiene que tributar");
	}
	return 0;
}

