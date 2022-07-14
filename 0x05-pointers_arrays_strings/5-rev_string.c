#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the string
 * @s : string to be tested
 * Return : void
 */

void rev_string(char *s)
{
	int x, i, y;
	char temp;

	for (x = 0; s[x] != '\0'; x++)
		;
	i = 0;

	y = x / 2;

	while (y--)
	{
		temp = s[x - i - 1];
		s[x - i  - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
