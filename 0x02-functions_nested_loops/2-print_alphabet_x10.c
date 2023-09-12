#include "main.h"
/**
 *print_alphabet - entry point
 *
 *Return: 0 for success
 */
void print_alphabet(void)
{
	int me;
	int you;

	for (me = 'a'; me <= 'z'; me++)
	{
		for (you = 'a'; you <= 'z'; you++)
			_putchar(you);
	}

	_putchar('\n');
}
