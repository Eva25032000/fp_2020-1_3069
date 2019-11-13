#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[]){
	int lista[argc],c,k,aux;
	for (c=1; c<argc; c++){
		lista[c]=atoi(argv[c]);
	}
    for(c=0;c<argc;c++){/*este for sirve para que vaya recorriendo numero por numero en la lista*/
		for(k=0;k<argc;k++){//este for sirve para ir cambiando el lugar de las columnas
		if(lista[k]>lista[k+1]){//esta condicion nos permite cambiar los lugares
		//si el numero anterior al siguiente es mayor,tendra que cmabiarlo
		aux=lista[k+1];//la variable aux almacena el valor del siguiente numero
		lista[k+1]=lista[k];//el numero siguiente se convierte en el numero anterior
		lista[k]=aux;//el numero anterior se convierte en aux
		//esto se repite hasta que queden de orden ascendete
	}
        }
     	    }
 for(c=1;c<argc;c++){/*este for sirve para que vaya recorriendo numero por numero en la lista*/
        printf("%i ",lista[c]);
	
		}
 
    printf("\n");
return 0;
}
