#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int t=0;
	printf("ingrese la temperatura:\n");
	scanf("%d", &t);
	
	if (t>100){
		printf("arriba del punto de ebullición del agua");
	}
	else{
		printf("abajo del punto de ebullición del agua");
	}
	return 0;
}

