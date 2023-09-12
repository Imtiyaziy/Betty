#include "main.h"
/**
 *print_alphabet - entry point
 *
 *Return: 0 for success
 */
void print_alphabet(void)
{
	char me;

	for (me = 'a'; me <= 'z'; me++)
		_putchar(me);
	_putchar('\n');
}
