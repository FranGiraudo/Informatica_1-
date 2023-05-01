#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a=0, b=0, c=0;
	printf("ingrese 3 numeros:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a==b && a==c){
		printf("los 3 son iguales");
	}
	else if (a==b && a!=c){
		printf("los 2 primeros son iguales");
	}
	else if(a!=b && a==c){
		printf("el primero y el ultimo son iguales");
	}
	else if(b==c && a!=b){
		printf("el segundo y el ultimo son iguales");
	}
	else if(b!=a && a!=c){
		printf("son todos diferentes");
	}
	return 0;
}

