#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int e=0;
	printf("ingrese su edad:\n");
	scanf("%d", &e);
	
	if (e<4){
		printf("la entrada es gratis");
	}
	else if (e>=4 && e<18){
		printf("la entrada cuesta $100");
	}
	else if (e>=18){
		printf("la entrada cuesta $200");
	}
	
	return 0;
}

