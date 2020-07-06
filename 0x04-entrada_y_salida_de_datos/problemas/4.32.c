#include <stdio.h>

int main()
/* ejemplo de programa interactivo */
{
	char nombre[20];
	float nota1, nota2, nota3, media;

	printf("Por favor, introduce tu nombre: ");
	/* introducir nombre */
	scanf("%[^\n]", nombre);

	printf("Por favor, introduce la nota 1: ");

	/* introducir nota 1 */
	scanf("%f", &nota1);

	printf("Por favor, introduce la nota 2: ");

	/* introducir nota 2 */
	scanf("%f", &nota2);

	printf("Por favor, introduce la nota 3: ");

	/* introducir nota 3 */
	scanf("%f", &nota3);

	/* calcular la media */
	media = (nota1 + nota2 + nota3) / 3;

	/* escribir la salida */
	printf("\n\nNombre: %-s\n\n", nombre);
	printf("Nota 1: %-5.1f\n", nota1);
	printf("Nota 2: %-5.1f\n", nota2);
	printf("Nota 3: %-5.1f\n", nota3);
	printf("Media: %-5.1f\n", media);

}
