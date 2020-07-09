/*Programa para calcular el area de un circulo*/
#include <stdio.h>

int main(void)
{
	float radio, area;

	printf("Radio: ?\n");
	scanf("%f", &radio);

	area = 3.14159 * radio * radio;

	printf("Area del circulo: %f\n", area);
}
