#include <stdio.h>

int main(int argc, char *argv[]) {
	float vmb=0, gb=1024;
	printf("ingrese un valor en mb\n");
	scanf("%f",&vmb);
	printf("el resultado es:%f gb",vmb/gb);
	return 0;
}

