#include "main.h"

/**
 *print_rev - a function that prints a string, in reverse,
 *followed by a new line
 *@s: input
 *
 */
void print_rev(char *s)
{
	int j = 0;
	int dj;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	s--;

	for (dj = j; dj >= 0; dj--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
