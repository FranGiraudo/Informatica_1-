#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int t=0, mt=0, res=0;
	printf("ingrese el tipo de su tarjeta \n");
	scanf("%d", &t);
	printf("ingrese el limite actual de su tarjeta \n");
	scanf("%d", &mt);
	
switch(t){
	case 1:
		res=mt*1.25;
		break;
	case 2:
		res=mt*1.35;
		break;
	case 3:
		res=mt*1.4;
		break;
	case 4:
		res=mt*1.5;
		break;
	}
printf("el limite actual es:%d",res);
	return 0;
}

