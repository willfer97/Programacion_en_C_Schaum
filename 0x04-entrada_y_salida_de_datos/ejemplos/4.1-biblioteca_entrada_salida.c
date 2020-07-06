/* ejemplo del uso de funciones de biblioteca de entrada/salida */

#include <stdio.h>

int main(){
/* declaraciones */
	char c, d;
	float x, y;
	int i, j, k;
/* entrada de un caracter */
	c = getchar();
/* entrada de numero en coma flotante */
	scanf("%f", &x);
/* entrada de enteros */
	scanf("%d %d", &i, &j);
/* salida de un caracter */
	putchar(c);
/* salida de numeros */
	printf("%3d %7.4f", k, y);
}
