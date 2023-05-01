#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1=0, n2=0, resultado=0;
	char opc;
	printf("ingrese 2 numeros: \n");
	scanf("%d%d", &n1, &n2);
	printf("inrese que operacion quiere realizar\n");
	scanf(" %c",&opc);
	
	switch(opc){
		case'+':
			resultado=n1+n2;
			break;
		case'-':
			resultado=n1-n2;
			break;
		case'*':
			resultado=n1*n2;
			break;
		case'/':
			resultado=n1/n2;
			break;
	}	
	printf("el resultado es: %d",resultado );
	return 0;
}

