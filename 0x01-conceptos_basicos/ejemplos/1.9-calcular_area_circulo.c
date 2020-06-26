
/*Programa para calcular el area de varios circulo
 usando un bucle for */
#include <stdio.h>
#define PI 3.14159
/* prototipo de funcion */
float procesar(float radio);

int main(void)
{
/* declaracion de variables*/
	float radio, area;
	int cont, n;

	printf("Nº de circulos? ");
	scanf("%d", &n);

	for (cont = 0; cont < n; cont++)
	{
		printf("\nCirculo nº %d:\t Radio = ? ", cont);
		scanf("%f", &radio);

		if (radio < 0)
			area = 0;
		else
			area = procesar(radio);

		printf("Area del circulo: %f\n", area);
	}
}
/* definicion de funcion */
float procesar(float r)
{
/* declaracion devariable local */
	float a;

	a = PI * r * r;

	return (a);
}
