#include "main.h"

/**
 *puts2 - Write a function that prints every other character of a string,
 *starting with the first character, followed by a new line
 *@str: input
 *
 */
void puts2(char *str)
{
	int l = 0;
	int a;
	char *m = str;
	int o;

	while (*m != '\0')
	{
		m++;
		l++;
	}
	a = l - 1;

	for (o = 0; o <= a; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
		_putchar('\n');
}
