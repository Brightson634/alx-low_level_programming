#include "main.h"

/**
* print_alphabet_x10 - 10 times alphabet
*/

void print_alphabet_x10(void)
{
	int y = 0;

	while (y < 10)
	{
		int s;

		for (s = 'a'; s <= 'z'; s++)
			_putchar(s);
		_putchar('\n');

		y++;
}
}
