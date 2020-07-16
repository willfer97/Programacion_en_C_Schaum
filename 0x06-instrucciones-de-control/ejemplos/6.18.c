/* calculas la media de varias listas de numeros */
#include <stdio.h>

int main()
{
	int cont = 1, contlistas = 1, n, nlistas;
	float media, x, suma;

	/* leer el numero de las listas */
	printf("¿Cuántas litas?: ");
	scanf("%d", &nlistas);

	/* bucle exterior (procesar cada lista de numeros) */
	for (contlistas = 1; contlistas <= nlistas; ++contlistas)
	{

		/* inicializar y leer el valor de n */
		suma = 0;
		printf("\nLista numero %d\n¿Cuántos numeros?: ", contlistas);
		scanf("%d", &n);

		/* leer los numeros */
		for (cont = 1; cont <= n; ++cont)
		{
			printf("x = ");
			scanf("%f", &x);
			suma += x;
		}
		/* fin del bucle interno */

		/* calcular la media y escribir la respuesta */
		media = suma / n;
		printf("Media: %f\n", media);
	}
	/* fin del bucle externo */
}
