#include <stdio.h>

int menor(int a, int b);

int main()
{
	int n, i = 0;
	int a[100], b[100], min[100];

	printf("Para PARAR, introducir 0 en cada numero\n");

	printf("\nIntroduzca el primer numero: ");
	scanf("%d", &a[i]);

	printf("\nIntroduzca el segundo numero: ");
	scanf("%d", &b[i]);

	while (a[i] || b[i])
	{

		min[i] = menor(a[i], b[i]);

		printf("\nIntroduzca el primer numero: ");
		scanf("%d", &a[++i]);
		printf("\nIntroduzca el segundo numero: ");
		scanf("%d", &a[i]);
	}

	n = --i;
	printf("\nRelacion de resultados\n\n");
	for (i = 0; i <= n; ++i)
		printf("a = %d   b = %d   min = %d\n", a[i], b[i], min[i]);
}

int menor(int a, int b)
{
	if (a <= b)
		return(a);
	else
		return(b);
}
