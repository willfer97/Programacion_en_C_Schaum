#include <stdio.h>

int menor(int a, int b);

int main()
{
	int cont, n, a, b, min;

	printf("¿Cuantos pares de numeros? ");
	scanf("%d", &n);

	for (cont = 1; cont <= n; ++cont)
	{
		printf("Introduzca el primer numero: ");
		scanf("%d", &a);
		printf("Introduzca el segundo numero: ");
		scanf("%d", &b);

		min = menor(a, b);

		printf("\nEl numero menor es: %d\n", min);
	}
}

int menor(int a, int b)
{
	if (a <= b)
		return(a);
	else
		return(b);
}
