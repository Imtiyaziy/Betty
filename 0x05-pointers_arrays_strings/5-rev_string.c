#include "main.h"

/**
 *rev_string - a function that reverses a string
 *@s: input
 *
 */
void rev_string(char *s)
{
	char j = s[0];
	int k = 0;
	int l;

	while (s[k] != '\0')
	k++;

	for (l = 0; l < k; l++)
	{
		k--;
		j = s[l];
		s[l] = s[k];
		s[k] = j;
	}
}
