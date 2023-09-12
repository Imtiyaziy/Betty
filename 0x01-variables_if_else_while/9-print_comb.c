#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - display beginning
 *
 * Return: 0 for success
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;

		if (n < 10 && n != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
