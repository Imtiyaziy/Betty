#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main - display input
 *
 *Return: 0 for success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '1');

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
				}
			if (b == 9)
			{
				a++;
				b = a;
			}
			}
	}
	putchar('\n');
	return (0);
}
