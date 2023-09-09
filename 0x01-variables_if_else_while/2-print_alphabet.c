#include <stdio.h>

/**
 * main - display Printing the alphabet in lower case followed by a new line
 * Return: O and exit program
 */
int main(void)
{
	char letter;
	 
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	putchar('\n');

	return (0);
}
