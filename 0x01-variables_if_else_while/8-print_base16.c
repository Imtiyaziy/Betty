#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *main - display input
 *
 *Return: 0 for success
 */
int main(void)
{
	char word = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (word <= 'f')
	{
		putchar(word);
		word++;
	}
		putchar('\n');
		return (0);
}
