#include <stdio.h>

int main()
{
	float p, v, m, t;

	printf("Calcularemos la masa del aire de un neumatico de automovil\n\n");

	printf("Ingresa la presion: ");
	scanf("%f", &p);

	printf("Ingresa el volumen: ");
	scanf("%f", &v);

	printf("Ingresa la temperatura en ºF: ");
	scanf("%f", &t);

	m = (p * v) / (0.37 * (t + 460));

	printf("\nLa masa del neumatico es de: %f\n", m);
}
