#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1=0, n2=0, res=0;
	printf("ingrese 2 numeros:\n");
	scanf("%d %d", &n1,&n2);
	
	if (n2!=0){
		res=n1/n2;
		printf("el resultado es:%d",res);
	}
	else{
		printf("no se puede dividir por 0");
	}
	if (n1&n2!=0){
		printf("\nno es exacta");
		printf("\nel resto es:%d",n1%n2);
	}
	else if (n2!=0){
		printf("\nes exacta");
	}
	return 0;
}

