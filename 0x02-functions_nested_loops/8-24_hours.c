#iclude "main.h"

/**
 *jack_bauer - display point
 *a : The character to print
 *
 *Return: 0 for sucess
 */
void jack_bauer(void)
{
	int h = 0,

		for (d = 0; d <= 2; d++)
		{
			int h1;

			for (h1 = 0; h1 <= 3; h1++)
			{
				_putchar(h1);
			}
			_pucchar(h);
			_putchar(':');

			int m;

			for (m = 0; m <= 5; m++)
			{
				_putchar(m);
			}

			int s;

			for (s = 0; s <= 9; s++)
			{
				_putchar(s);
			}
			_putchar('\n');
		}
}
