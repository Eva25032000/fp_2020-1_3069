#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int casos(char n){
	int z;
	switch(n){
	case 'J':z=10;break;
	case 'Q':z=10;break;
	case 'K':z=10;break;
	case 'A':z=11;break;
	case 'j':z=10;break;
	case 'q':z=10;break;
	case 'k':z=10;break;
	case 'a':z=11;break;
	}
	return z;
}
int main(int argc, char *argv[]) {
	int valor,i=1,coi;
	for(i;i<argc;i++){
		coi=argv[i][0]=='J' || argv[i][0]=='j' ||argv[i][0]=='Q' ||argv[i][0]=='q' || argv[i][0]=='K' ||argv[i][0]=='k' ||argv[i][0]=='A' ||argv[i][0]=='a';
		if(coi==1){
			valor=casos(argv[i][0]);
		}
		else{
			valor=atoi(argv[i]);
		}
		printf("%i\n",valor);
	}
	return 0;
	
}

