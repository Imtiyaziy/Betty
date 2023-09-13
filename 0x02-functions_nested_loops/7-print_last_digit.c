#include "main.h"

/**
 *print_last_digit - display point
 *@b : The character to print
 *
 *Return: 0 for success
 */
int print_last_digit(int b)
{
	int c = b % 10;

	if (c < 10)
		c *= -1;

	_putchar('0' + c);

		return (c);


	if (c >= 10)

		return (c);
}
