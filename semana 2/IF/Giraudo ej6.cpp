#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ll=0, ld=0, resll=0, resld=0;
	printf("ingrese los minutos de llamadas locales:\n");
	scanf("%d", &ll);
	printf("ingrese los minutos de llamadas larga distancia:\n");
	scanf("%d", &ld);
	
	if (ll>=1000 && ld>=1000){
		printf("Usted es beneficiario");
		resll=1000*0.05;
		resld=1000*0.1;
		printf("debe %f:",(resll+resld)*0.9);
	}
	else{
		printf("usted no es beneficiario");
	}
	return 0;
}

