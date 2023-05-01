#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char in;
	int n=0;
	printf("ingrese la inicial de su apellido:");
	scanf(" %c", &in);
	printf("ingrese su nota:");
	scanf("%d", &n);
	
	if (in>='A' && in<='M'){
		if (n>=7){
			printf("usted pertenece al grupo A");
		}
		else{
			printf("usted pertenece al grupo C");
		}
	}
	if (in>='N' && in<='Z'){
		if (n>=7){
			printf("usted pertenece al grupo B");
		}
		else{
			printf("usted pertenece al grupo D");
		}
	}
	return 0;
}

