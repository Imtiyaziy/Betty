#include "main.h"

/**
 *jack_bauer - display point
 *a : The character to print
 *
 *Return: 0 for sucess
 */
void jack_bauer(void)
{
	int h;
	int h1;
	int m;
	int s;

	for (h = 0; h < 3; h++)
	{
		for (h1 = 0; h1 <= 9; h1++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (s = 0; s <= 9; s++)
				{
					if ((h < 2 && h1 <= 9) || (h == 2 && h1 < 4))
					{
						_putchar(h + '0');
						_putchar(h1 + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(s + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

