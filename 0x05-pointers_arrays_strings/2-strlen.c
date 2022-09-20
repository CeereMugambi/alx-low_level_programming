#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an int to be updated
 *
 * Return: void meaning output is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}

	return (u);
}
