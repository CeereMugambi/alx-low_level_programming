#include "main.h"

/**
 * puts2 - Prints all characters of a string
 * @str: pointer to an int that wil be updated
 *
 * Return: Void when output is correct
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar (str[i]);
	}

	_putchar('\n');
}
