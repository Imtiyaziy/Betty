#include "main.h"

/**
 *times_table - display point
 *@ : The character to print
 *
 *Return: 0 for sucess
 */
void times_table(void)
{
	int t;
	int n;
	int d;

	for (t = 0; t <= 9; t++)
	{
		for (n = 0; n <= 9; n++)
		{
			d = t * n;

			if (d >= 0)
			{
				_putchar((d / 10) + 0);
				_putchar((d % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
