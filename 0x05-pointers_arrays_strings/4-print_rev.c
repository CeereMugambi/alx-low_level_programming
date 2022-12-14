#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: pointer to int that will be updated
 *
 * Return: Void when output is correct
 */

void print_rev(char *s)
{
	int i;

	i  = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
