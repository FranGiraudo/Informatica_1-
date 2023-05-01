#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int la=0, lb=0, lc=0;
	printf("ingrese los 3 lados del triangulo:\n");
	scanf("%d %d %d", &la, &lb, &lc);
	
	if (la==lb && la==lc){
		printf("es equilatero");
	}
	else if(la==lb && la!=lc || la==lc && la!=lb || lb==lc && lb!=la){
		printf("es isosceles");
	}
	else if(la!=lb && la!=lc){
		printf("es escaleno");
	}
	return 0;
}

