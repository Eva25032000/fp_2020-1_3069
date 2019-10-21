#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int lista[argc],suma=0;
    float promedio;
    for(int a=1;a<argc;a++){
        lista[a]=atoi(argv[a]);
    }
    for(int a=1;a<argc;a++){
        suma=suma+lista[a];
    }
    promedio=(float)suma/(argc-1);
    printf("%f\n",promedio);
    return 0;
}

