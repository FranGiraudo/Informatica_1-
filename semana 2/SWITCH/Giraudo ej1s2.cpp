#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n=0;
	printf("ingrese un numero del 1 al 7:\n");
	scanf("%d", &n);
	
	
	switch(n){
	case 1:
		printf("lunes");
		break;
	case 2:
		printf("martes");
		break;
	case 3:
		printf("mièrcoles");
		break;
	case 4:
		printf("jueves");
		break;
	case 5:
		printf("viernes");
		break;
	case 6:
		printf("sabado");
		break;
	case 7:
		printf("domingo");
		break;
	}
	return 0;
}

