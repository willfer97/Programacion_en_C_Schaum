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

	scanf("%4d %4d %8f %15lf", &i, &j, &x, &dx);
	scanf("%5d %12ld %5d %10f %5u", &i, &ix, &j, &x, &u);
	scanf("%6d %6u %c", &i, &u, &c);
	scanf("%c %9f %16lf %6hd", &c, &x, &dx, &s);
}
