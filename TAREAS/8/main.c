#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[]){
	int condicion; // variable que cumple con la condicion cero o uno
	double grados,resultado;//variable qu recibe los grados e imprimir el resultaqdo
	condicion=atoi(argv[1]);//convertir el primer argumento a entero
    grados=atof(argv[2]);//converitr el segundo argumento a flotante
	switch(condicion){//este interador revisa la condicion
		case 0://convertira de celsius a fahrenheit
				resultado=(grados*1.8)+32;
				printf("%.2lf\n",resultado);break;
				
		case 1:	//convertir de fahrenheit a celsius
				resultado=(grados-32)/1.8;               
				printf("%.2lf\n",resultado);break;
				
		default:printf("No es valido");	
	}
	 
	return 0;                          
} 
