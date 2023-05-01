#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int e=0, i=0;
	printf("ingrese su edad:");
	scanf("%d",&e);
	printf("cuanto es su ingreso mensual:");
	scanf("%d",&i);
	//en vez de and puedo usar && y en vez de or ||
	if (e>=25 and i>=200000){
		printf("usted tiene que tributar");
	}
	else{
		printf("usted no tiene que tributar");
	}
	return 0;
}

