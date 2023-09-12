#include "main.h"

/**
 *_isalpha - display point
 *@c: The character t9 print
 *
 *Return: 0 for success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
