#include <stdio.h>

int main()
{
	int cont;
	char texto[80];

	printf("Introduce el texto a codificar\n\n");

	for (cont = 0; (texto[cont] = getchar()) != '\n'; ++cont)
		texto[cont] -= 30;

	printf("\n----------TEXTO CODIFICADO--------\n\n");
	printf("%s\n", texto);

	printf("Introduce el texto a decodificar\n\n");

	for (cont = 0; (texto[cont] = getchar()) != '\n'; ++cont)
		texto[cont] += 30;

	printf("\n----------TEXTO DECODIFICADO--------\n\n");
	printf("%s\n", texto);

	/*
	int cont, aux;
	char texto[80];

	printf("Introduce el texto a codificar\n\n");
	for (cont = 0; (texto[cont] = getchar()) != '\n'; ++cont)
		texto[cont] -= 30;
		;

	printf("\n----------TEXTO CODIFICADO--------\n\n");
	printf("%s\n", texto);

	aux = cont;

	for (cont = 0; cont < aux; ++cont)
		texto[cont] += 30;
		;

	printf("\n----------TEXTO DECODIFICADO--------\n\n");
	printf("%s\n", texto);
	*/
}
