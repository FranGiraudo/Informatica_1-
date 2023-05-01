#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c=0, f=0;
	printf("ingrese el costo de la cuota:\n");
	scanf("%d", &c);
	printf("ingrese la fecha del pago:\n");
	scanf("%d", &f);
	
	if (f<=10){
		printf("no se cobra recargo, valor final:%d",c);
	}
	else if (c>5000){
		printf("la cuota tiene un recargo de 10%, valor final:$%f", c*1.1);
	}
	else if (c<=5000){
		printf("la cuota tiene un recargo de 5%, valor final:$%f", c*1.05);
	}
	return 0;
}

