#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, n5;
	float dol, md = 0.50, q = 0.25, dim = 0.10, niq = 0.05, pq = 0.01;

	printf("Introduzca los valores solicitados a continuacion para calcular el valor (en dolares) que contiene en su marranito\n\n");

	printf("Introduzca la cantidad de medios dolares: ");
	scanf("%d", &n1);
	printf("Introduzca la cantidad de cuartos dolares: ");
	scanf("%d", &n2);
	printf("Introduzca la cantidad de dimes dolares: ");
	scanf("%d", &n3);
	printf("Introduzca la cantidad de niqueles dolares: ");
	scanf("%d", &n4);
	printf("Introduzca la cantidad de peniques dolares: ");
	scanf("%d", &n5);

	dol = ((n1 * md) + (n2 * q) + (n3 * dim) + (n4 * niq) + (n5 * pq));

	printf("\nTotal ahorrado (dolares) en el marranito: $%.2f\n\n", dol);
}
