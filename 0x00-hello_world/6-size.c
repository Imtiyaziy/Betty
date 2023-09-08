#include <stdio.h>

/**
 *main - display the size of various data type
 *Return: 0 and exit the program
 */
int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));
	printf("Size of a int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d bytes\n", sizeof(long long int));
	return (0);
}
