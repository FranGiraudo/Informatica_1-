#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int um=0, ua=0;
	printf("ingrese la cantidad de unidades de la materia\n");
	scanf("%d", &um);
	printf("ingrese la cantidad de unidades estudiadas\n");
	scanf("%d", &ua);
	
	if (um==ua){
		printf("el alumno estudio todas las unidads");
	}
	else if (ua<um){//el (ua<um) es solo para que no printee nada cuando el num de unidades estudiadas sea mayor al de unidades dadas
		printf("las unidades que el alumno debe estudiar son:%d",um-ua);
	}
	return 0;
}

