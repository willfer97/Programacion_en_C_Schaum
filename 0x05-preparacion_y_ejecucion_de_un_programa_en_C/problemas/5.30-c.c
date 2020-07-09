#include <stdio.h>

int main()
{
	int cel, fahr;

	printf("Introducir los grados Fº a convertir: ");
	scanf("%d", &fahr);

	cel = 5 * (fahr - 32) / 9;

	printf("\n%d ºF es %d ºC\n", fahr, cel);
}
