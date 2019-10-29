#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double numero,numero2,operacion1,operacion2,operacion3,operacion4;
	numero=atof(argv[1]);
	numero2=atof(argv[2]);
	operacion1=numero+numero2;
	operacion2=numero-numero2;
	operacion3=numero*numero2;
	operacion4=numero/numero2;
	printf("%.2f\n",operacion1);
	printf("%.2f\n",operacion2);
	printf("%.2f\n",operacion3);
	printf("%.2f\n",operacion4);

	return 0;
}
