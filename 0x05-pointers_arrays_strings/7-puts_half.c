#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half os string usong modulo 2
 * @str: string to be use
 * Return: void
 */

void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	y = (x + 1) / 2;
	for (x = y; str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
