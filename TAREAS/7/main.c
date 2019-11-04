#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
    double operacion,base,potencia;//declaramos las variables
    base=atof(argv[1]);//cabiamos el primer argumento a double sera la base
    potencia=atof(argv[2]);//cambiamos el segundo argumento a double sera la potencia
    operacion=pow(base,potencia);//operamos ambas variables
    printf("%.2f\n",operacion);//imprimos el resultado
	 
	return 0;
} 
