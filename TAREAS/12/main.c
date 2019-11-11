#include <stdio.h>
///este programa nos dice cuantos saludos totales por la cantidad de
//personas hacen
int regresar(int x){//funcion
	int a,z=0;//varibale de return y contador
	for(a=0;a<x;a++){//for para ir sumando las personas
		z=z+a;	//concatenar los valores
		}
	return z;//regresa los saludos
}
int main(int argc, char*argv[]){
	int personas,n;
    personas=atoi(argv[1]);
	n=regresar(personas);
	printf("%i\n",n);
	return 0;
}
