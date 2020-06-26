/*Programa para calcular el area de varios circulo
 usando un bucle while; no se especifica en numero de circulos */
#include <stdio.h>
#define PI 3.14159
/* prototipo de funcion */
float procesar(float radio);

int main(void)
{
/* declaracion de variables*/
	float radio, area;
	int cont;

	printf("Para PARAR, introducir 0 en el valor del radio\n");
	printf("\nRadio = ? ");
	scanf("%f", &radio);

	while (radio != 0)
	{
		if (radio < 0)
			area = 0;
		else
			area = procesar(radio);

		printf("Area del circulo: %f\n", area);

		printf("\nRadio = ? ");
		scanf("%f", &radio);
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
