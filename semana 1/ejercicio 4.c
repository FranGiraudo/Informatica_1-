#include <stdio.h>

int main(int argc, char *argv[]) {
	float vm=0, km=1000;
	printf("ingrese un valor en metros:\n");
	scanf("%f",&vm);
	printf("el resultado es:%f km",vm/km);
	return 0;
}

