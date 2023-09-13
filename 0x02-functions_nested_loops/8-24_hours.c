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

		for (h = 0; h <= 2; h++)
		{
			int h1;

			for (h1 = 0; h1 < 4; h1++)
			{
				int m;

				for (m = 0; m <= 5; m++)
				{
					int s;

					for (s = 0; s <= 9; s++)
					{
						if (h == 2 && h1 == 3)
						{
							break;
						}
						_putchar(h + '0');
						_putchar(h1 + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(s + '0');
					}
				}
			}
		}
}

