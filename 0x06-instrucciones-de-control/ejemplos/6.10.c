/* calcular la media de n numeros */

#include <stdio.h>

int main()
{
	int n, cont = 1;
	float x, media, suma = 0;

	printf("¿Cuantos valores son?: ");
	scanf("%d", &n);

	/* leer los numeros */
	while (cont <= n)
	{
		printf("x = ");
		scanf("%f", &x);
		suma += x;
		++cont;
	}

	/* calcular la media y escribir la respuesta */
	media = suma / n;
	printf("La media es %f\n", media);
}
