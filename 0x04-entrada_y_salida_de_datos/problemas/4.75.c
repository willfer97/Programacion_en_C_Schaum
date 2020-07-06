#include <stdio.h>

int main()
{
	int i, j;
	long ix;
	unsigned u;
	float x;
	double dx;
	char c;

	printf("%4d %4d %14.8e %14.8e\n\n", i, j, x, dx);
	printf("%4d\n %4d\n %14.8e\n %14.8e\n\n", i, j, x, dx);
	printf("%5d %12ld %5d %10.5f %5u\n\n", i, ix, j, x, u);
	printf("%5d %12ld %5d\n\n %10.5f %5u\n\n", i, ix, j, x, u);
	printf("%6d   %6u   %c\n\n", i, u, c);
	printf("%5d %5u %11.4f\n\n", j, u, x);
	printf("%-5d %-5u %-11.4f\n\n", j, u, x);
	printf("%+5d %5u %+11.4f\n\n", j, u, x);
	printf("%05d %05u %11.4f\n\n", j, u, x);
	printf("%5d %5u %#11.4f\n\n", j, u, x);
}
