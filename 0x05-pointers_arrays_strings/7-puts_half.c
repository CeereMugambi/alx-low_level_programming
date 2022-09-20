#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: pointer to integer that wil be updated
 *
 * Return: Void when output is correct
 */

void puts_half(char *str)
{
	int i, end;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	end = (i + 1) / 2;

	for (i = end; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
}
