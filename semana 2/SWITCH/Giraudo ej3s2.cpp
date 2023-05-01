#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char l;
	printf("ingrese una letra:\n");
	scanf( "%c",&l);
	if(l=='a'|| l=='e'|| l=='i'|| l=='o'||l=='u')
	{
		printf("es vocal");
	}
	else
	{
	   printf("no es vocal");
	}
	   return 0;
}

