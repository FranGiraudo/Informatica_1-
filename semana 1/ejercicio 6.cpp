#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre="";
	int anio=0, fecha=0, edad=0;
	
	printf("ingrese nombre:\n");
	scanf("%s",&nombre);
	
	printf("ingrese su a�o de nacimiento:\n");
	scanf("%d",&anio);
	
	printf("ingrese el a�o actual:\n");
	scanf("%d",&fecha);
	
	printf("Nombre: %s\nEdad: %d",nombre, fecha-anio);
	
	
	return 0;
}

