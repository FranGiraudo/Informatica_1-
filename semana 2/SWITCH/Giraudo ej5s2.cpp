#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int z=0, g=0, res=0;
	printf("ingrese la zona del pedido 1,2,3,4 \n");
	scanf("%d",&z);
	printf("ingrese cuantos g: \n");
	scanf("%d",&g);
	
switch(z){
	case 1:
		res=g*30;
		break;
	case 2:
		res=g*20;
		break;
	case 3:
		res=g*70;
		break;
	case 4:
		res=g*100;
		break;
}
printf("el precio es: %d",res);
	return 0;
}

