#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *
 *Return: 0 for success
 */
void print_alphabet_x10(void)
{
	int me;
	int you;

	for (me = '0'; me <= '9'; me++)
	{
		for (you = 'a'; you <= 'z'; you++)
			_putchar(you);
	}

	_putchar('\n');
}
