#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = a + 1;

	while ( a < 9)
	{
		putchar(a + '0');
		a++;
		if (b < 10)
		{
			putchar(b + '0');
			b++;

		}

			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
