#include "main.h"
#include <stdio.h>

/**
 * print_rev - print string in reverse order
 * @s : string to ne tested
 * Return: void
 */

void print_rev(char *s)
{
	int f;/** forward*/
	int r;/**reverse*/

	for (f = 0; s[f] != '\0'; f++)
	{
	}
	for (r = f - 1; r >= s[f]; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
