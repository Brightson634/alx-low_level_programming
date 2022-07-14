#include "main.h"
#include <stdio.h>

/**
 * puts2 -print every character
 * @str : string to be tested
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i[str] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
