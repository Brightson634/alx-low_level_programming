#include "main.h"
#include <stdio.h>

/**
 * print_array - print element o an array
 * @a : pointer
 * @n : numbers of array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
