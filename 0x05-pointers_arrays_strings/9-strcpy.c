#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies of ponyer to src
 * @dest : parameter one
 * @src : parameter two
 * Return: ppointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	*(dest + i) = '\0';

	return (dest);
}
