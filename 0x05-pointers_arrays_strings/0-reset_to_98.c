#include "main.h"


/**
* reset_to_98 - Sets the pointer value to 98
*@n: pointer declaration
*Returns -Void
*/
void reset_to_98(int *n)
	{
	int r = 98;
	*n = r;
	_putchar("%x\n", *n);

	}
