#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1=0, n2=0;
	printf("ingrese 2 numeros:\n");
	scanf("%d %d",&n1,&n2);
	
	if (n1>n2)
	{
		printf("el primer numero es mayor");
	}
	if (n1<n2)
	{
		printf("el segundo numero es mayor");
	}
	else if (n1==n2)
	{
		printf("los numeros son iguales");
	}
	return 0;
}

