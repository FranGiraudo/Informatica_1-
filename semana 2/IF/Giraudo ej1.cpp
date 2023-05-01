#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n=0;
	printf("ingrese un numero:\n");
	scanf("%d", &n);
	
	if (n%2==0){
		printf("es par");
		
	}
	else{
		printf("no es par");
	}
	return 0;
}

