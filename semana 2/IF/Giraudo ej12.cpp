#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int r=0;
	printf("ingrese su renta:\n");
	scanf("%d", &r);
	
	if (r<20000){
		printf("le corresponde el tipo impositivo del 5%");
	}
	else if (r>=20000 && r<30000){
		printf("le corresponde el tipo impositivo del 10%");
	}
	else if (r>=30000 && r<40000){
		printf("le corresponde el tipo impositivo del 15%");
	}
	else if (r>40000){
		printf("le corresponde el tipo impositivo del 20%");
	}
	return 0;
}

