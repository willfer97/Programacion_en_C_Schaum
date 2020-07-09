/*Programa para calcular el area de varios circulo
 usando un bucle while; los resultados se almacenan en una formacion;
 no se especifica el numero de circulos */
#include <stdio.h>
#define PI 3.14159
/* prototipo de funcion */
float procesar(float radio);

int main(void)
{
/* declaracion de variables*/
	int n, i = 0;
/* declaracion de formaciones */
	float radio[100], area[100];

	printf("Para PARAR, introducir 0 en el valor del radio\n\n");
	printf("Radio = ? ");
	scanf("%f", &radio[i]);

	while (radio[i])
	{
		if (radio[i] < 0)
			area[i] = 0;
		else
			area[i] = procesar(radio[i]);

		printf("Radio = ? ");
		scanf("%f", &radio[++i]);
	}
/* el mayor valor de i */
	n = --i;
/* presentar los elementos de la formacion */
	printf("\nRelacion de resultados\n\n");
	for (i = 0; i <= n; ++i)
		printf("Radio = %.0f\t Area = %f\n", radio[i], area[i]);
}
/* definicion de funcion */
float procesar(float r)
{
/* declaracion devariable local */
	float a;

	a = PI * r * r;

	return (a);
}
