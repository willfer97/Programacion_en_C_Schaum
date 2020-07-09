/* problema sencillo de interes compuesto */
#include <stdio.h>
#include <math.h>

int main()
{
	float p, r, n, i, f;

	/* leer datos de entrada (mediante peticiones rotuladas) */
	printf("Por favor, introduzca la suma inicial(P): ");
	scanf("%f", &p);
	printf("Por favor, introduzca el interes(r): ");
	scanf("%f", &r);
	printf("Por favor, introduzca el numero de años(n): ");
	scanf("%f", &n);

	/* calcular i = r / 100 */
	i = r / 100;

	/* calcular f = p(1 + i) elevado a n */
	f = p * pow((1 + i), n);

	/* escribir la salida */
	printf("\nEl valor final (F) es : %.2f\n", f);
}
