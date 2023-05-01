#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	char l;
	printf("ingrese una letra:\n");
	scanf( "%c",&l);
switch(l){
	case 'a':
		printf("es vocal");
		break;
	case 'e':
		printf("es vocal");
		break;
	case 'i':
		printf("es vocal");
		break;	
	case 'o':
		printf("es vocal");
		break;
	case 'u':
		printf("es vocal");
		break;
	default:
		printf("es consonante");
		break;
}	
	return 0;
}

