#include <stdio.h>

int main()
{
	char nombre[20];

	printf("HOLA, ¿COMO TE LLAMAS?\n\n");
	scanf("%[^\n]", nombre);
	printf("\nBIENVENIDO %s\nSEAMOS AMIGOS!\n", nombre);
}
