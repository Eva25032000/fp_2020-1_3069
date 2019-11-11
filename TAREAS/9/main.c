#include <stdio.h>
#include <stdlib.h>
//este programa suma los digitos
int main (int argc, char*argv[]){
int numero, recorredor=0;;//declaramos las variables
//declaramos la variable donde se va ir sumando
numero=atoi(argv[1]);//convertimos el argumento a entero
while(numero>0){//se repetira la secuencia mientras el numero sea mayor a cero
	recorredor=recorredor+numero%10;//sumara cada decimal
	numero=numero/10;//va ir sacando un decimal
}
printf("%i\n", recorredor);//imprime el resultado de la suma de los digitos
return 0;
}
