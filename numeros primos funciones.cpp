#include <iostream>
using namespace std;

int esprimo(int);

int main(int argc, char *argv[]) {
	int n=0, i=0;
	
	//printf("ingrese un numero\n");
	//scanf(" %d",&n);
	
	n=esprimo(n);
	for (i;i<16;i++){
		if (esprimo(i)==true){
			printf("%d", i);
			printf(")_");
			printf("es primo\n");
        }
        //if (esprimo(i)==true && esprimo(i+2)==true){
        //   printf("%d %d",i,i+2);
        //   printf(")_");
        //   printf("hay un par primo\n");
		//}
		else{
			printf("%d", i);
			printf(")_");
			printf("no es primo\n");
		}
	}
	
	return 0;
}
int esprimo(int num){
	int div,numpr=true;
	
	for (div=2;div<num;div++){
		if(num%div==0){
			numpr=false;
		}
	}
	return numpr;

}
