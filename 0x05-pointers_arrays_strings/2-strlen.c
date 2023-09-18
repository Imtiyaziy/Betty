#include "main.h"

/**
 *_strlen - a function that returns the length of a string
 *@s: Input
 *Return: 0 f0r succes
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
