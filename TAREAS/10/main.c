#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//este programa realiza la funcion cuadratica
int main(int argc, char *argv[]){
	double a,b,c,discriminante,potencia,multiplicacion;
	a=atof(argv[1]);//variable del coeficiente al cuadrado
	b=atof(argv[2]);//variable del coeficiente lineal
	c=atof(argv[3]);//variable del coeficiente de termino independiente
	potencia=b*b;//potencia de b
	multiplicacion=4*a*c;//multiplicacion de apor b y 4
	discriminante=potencia-multiplicacion;//calculo del discriminante
	if(discriminante>0){	//condicion si el discriminate es positivo
	double x1,x2,raiz;//declaracion del calculo de la rai y la respuestas
	raiz=sqrt(discriminante);//calculo de la raiz a partir del discriminante
	x1=-b+raiz/2*a;//raiz 1 
	x2=-b-raiz/2*a;//raiz 2
	printf("%.2lf\n",x1);
	printf("%.2lf\n",x2);
	}
	else{//si no se cumple 
		if(discriminante<0){//condicion cuando el discriminate es negativo
			double discriminante2,imaginario1,imaginario2,raiz1,x1,raiz2;//nuevas variables
			discriminante2=(multiplicacion-potencia);//intercambiar el orden de del discriminate para efectuar con numeros imaginarios
			x1=-b/2*a;//dejar la parte real a parte
			raiz1=sqrt(discriminante2);//sacamos raiz a al discriminate con numeros imaginarios
            raiz2=-sqrt(discriminante2);
				printf("%.2lf+%.2lfi\n",x1,raiz1);
				printf("%.2lf%.2lfi\n",x1,raiz2);
	}
		else{//si ninguna de las anteriores se cumple
			if(discriminante==0){//condicion cuando el discriminante vale cero;
				double xunica;//tendra un valor unico,que son los tcp
				xunica=-b/2*a;//solo se usa este termino
				printf("%.2lf\n",xunica);
			
			}
			}
			}
		}
		
	return 0;
}
