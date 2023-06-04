#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float cat1=0, cat2=0, hip=0;
	printf("ingrese el valor de los catetos \n");
	scanf("%f %f",&cat1, &cat2);
	hip=sqrt(pow(2,cat1)+cat2*cat2);
	printf("el valor de la hipotenusa es:%.2f",hip);
	return 0;
}

