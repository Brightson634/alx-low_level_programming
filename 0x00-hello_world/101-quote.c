#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if success.
 */

int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, var, sizeof(var) - 1);
	return (1);
}
Footer
© 2022 GitHub, Inc.
