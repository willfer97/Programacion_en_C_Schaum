#include <stdio.h>

int main()
{
	int i, j;
	long ix;
	short s;
	unsigned u;
	float x;
	double dx;
	char c;

	scanf("%d %d %f %lf", &i, &j, &x, &dx);
	scanf("%d %ld %d %f %u", &i, &ix, &j, &x, &u);
	scanf("%d %u %c", &i, &u, &c);
	scanf("%c %f %lf %hd", &c, &x, &dx, &s);
}
