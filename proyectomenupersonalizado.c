#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// barra invertida alt 92
int main(int argc, char *argv[]) {
	printf("-----------------------------------\n");
    printf("-----------------------------------\n");
	printf("Seleccione un a opcion\n");
	printf("\n");
	printf("\nPulse 1 para su primera frase");
	printf("\nPulse 2 para su segunda frase");
	printf("\nPulse 3 para su tercera frase\n");
	printf("-----------------------------------\n");
    printf("-----------------------------------\n");
	int opcion;
	scanf("%i",&opcion);
	
	switch(opcion)
	{
	case 1: printf("primera frase\n");
	break;
	case 2: printf("segunda frase\n");
	break;
	case 3: printf("tercera frase\n");
	break;
	default:printf("opcion incorrecta \n");
	
	}
	
	
	
	system("PAUSE");
	return 0;
}
