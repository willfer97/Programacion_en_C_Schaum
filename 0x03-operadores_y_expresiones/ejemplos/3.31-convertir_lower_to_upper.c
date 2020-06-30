#include <stdio.h>
#include <ctype.h>

int main()
{
	int minusc, mayusc;

	minusc = getchar();
	mayusc = toupper(minusc);
	putchar(mayusc);
	putchar('\n');
}
