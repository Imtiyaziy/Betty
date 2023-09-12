#include <stdio.h>
#include <stdlib.h>
/**
 *main - display input
 *
 *Return: 0 for success
 */
int main(void)
{
	char word = 'a';
	char letter = 'A';

	while (word <= 'z')
	{
		putchar(word);
		word++;
	}
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
		putchar('\n');
		return (0);
}
