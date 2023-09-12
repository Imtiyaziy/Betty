#include <stdio.h>
#include <stdlib.h>

/**
 *main - display begining
 *
 *Return: 0 for succes
 */

int main(void)
{
	char word = 'a';

	while (word <= 'z')
	{
		if (word != 'q' && word != 'e')
		{
		putchar(word);
		}
		word++;
	}

	putchar('\n');
	return (0);
}
