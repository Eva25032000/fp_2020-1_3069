#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double numero,numero2,operacion1,operacion2,operacion3,operacion4;
	numero=atof(argv[1]);
	numero2=atof(argv[2]);
	operacion1=numero+numero2;
	operacion2=numero-numero2;
	operacion3=numero*numero2;
	operacion4=numero/numero2;
	printf("La suma de los numeros es de:%.2f\n",operacion1);
	printf("La diferencia de los numeros es de:%.2f\n",operacion2);
	printf("La multiplicacion de los numeros es de:%.2f\n",operacion3);
	printf("La division de los numeros es de:%.2f\n",operacion4);
	return 0;
}
