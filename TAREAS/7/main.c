#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
    int a,operacion,base,potencia;//declaramos las variables
    base=atoi(argv[1]);//cabiamos el primer argumento a double sera la base
    potencia=atoi(argv[2]);//cambiamos el segundo argumento a double sera la potencia
    operacion=1;
	for(a=0;a<potencia;a++){//este for sirve para que la multiplicacion de la misma base se efectue segun la potencia
    operacion=operacion*base;//vamos concatenando los valores
	}
	printf("%i\n",operacion);//imprimos el resultado
	 
	return 0;
} 
