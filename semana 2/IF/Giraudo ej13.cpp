#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int al=0, vs=0, c=0;
	printf("ingrese la cantidad de alumnos:\n");
	scanf("%d", &al);
	
	if (al>100){
		vs=al*65;
		c=4000/al;
		printf("a cada alumno hay que cobrarle $65\n");
		printf("el valor a pagar por el colectivo por cada alumno es:$%d \n",c);
		printf("el director debe entregarle a la empresa de viajes:$%d",vs);
	}
	else if (al>=50 && al<=99){
		vs=al*70;
		c=4000/al;
		printf("a cada alumno hay que cobrarle $70\n");
		printf("el valor a pagar por el colectivo por cada alumno es:$%d \n",c);
		printf("el director debe entregarle a la empresa de viajes:$%d \n",vs);
	}
	else if (al>=30 && al<=49){
		vs=al*95;
		c=4000/al;
		printf("a cada alumno hay que cobrarle $95\n");
		printf("el valor a pagar por el colectivo por cada alumno es:$%d \n",c);
		printf("el director debe entregarle a la empresa de viajes:$%d",vs);
	}
	else if (al<30){
		vs=al*100;
		c=4000/al;
		printf("a cada alumno hay que cobrarle $100 \n");
		printf("el valor a pagar por el colectivo por cada alumno es:$%d \n",c);
		printf("el director debe entregarle a la empresa de viajes:$%d",vs);
	}
	return 0;
}

