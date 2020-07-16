#include <stdio.h>

int main()
{
	float x, media, suma = 0;
	int n, cont = 1;

	printf("¿Cuántos numeros vas a ingresar?: ");
	scanf("%d", &n);

	for (cont = 1; cont <= n; ++cont)
	{
		printf("x = ");
		scanf("%f", &x);
		suma += x;
	}

	media = suma / n;

	printf("Media = %f\n", media);
}
