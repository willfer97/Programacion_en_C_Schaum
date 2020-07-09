#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main()
{
	float vol, area, radio;

	printf("\nIntroducir el valor del radio para calcular el volumen y area de una esfera\n");
	printf("\nRadio = ?: ");
	scanf("%f", &radio);

	vol = 4 * PI * pow(radio, 3) / 3;
	area = 4 * PI * pow(radio, 2);

	printf("\nVolumen: %f\n\n", vol);
	printf("Area: %f\n\n", area);
}
