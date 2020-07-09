/*Programa para calcular el area de varios circulo
 usando un bucle while;
 los resultados se almacenan en una formacion;
 no se especifica el numero de circulos;
 se introduce una cadena de caracteres para cada conjunto de datos */
#include <stdio.h>
#define PI 3.14159
/* prototipo de funcion */
float procesar(float radio);

int main(void)
{
/* declaracion de variables*/
	int n, i = 0;
/* declaracion de variable tipo estructura */
	struct
	{
		char texto[20];
		float radio;
		float area;
	} circulo[10];

	printf("Para PARAR, introducir FIN en el identificador\n");
	printf("\nIdentificador: ");
	scanf("%s", circulo[i].texto);

	while (circulo[i].texto[0] != 'F' || circulo[i].texto[1] != 'I' || circulo[i].texto[2] != 'N')
	{
		printf("Radio = ? ");
		scanf("%f", &circulo[i].radio);

		if (circulo[i].radio < 0)
			circulo[i].area = 0;
		else
			circulo[i].area = procesar(circulo[i].radio);

		++i;
/* siguiente conjunto de datos */
		printf("\nIdentificador: ");
		scanf("%s", circulo[i].texto);
	}
/* el mayor valor de i */
	n = --i;
/* presentar los elementos de la formacion */
	printf("\n\nRelacion de resultados\n\n");
	for (i = 0; i <= n; ++i)
		printf("%s\tRadio = %.0f\t Area = %f\n", circulo[i].texto, circulo[i].radio, circulo[i].area);
}
/* definicion de funcion */
float procesar(float r)
{
/* declaracion devariable local */
	float a;

	a = PI * r * r;

	return (a);
}
