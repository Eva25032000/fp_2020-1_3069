#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	numero=atoi(argv[1]);
	if(numero%2==0){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	return 0;
}
