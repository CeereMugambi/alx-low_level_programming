#include "main.h"

/**
 * rev_string -Prints a revere string
 * @s: Pointer to int that will be updated
 *
 * Return: Void meaning output is correct
 */

void rev_string(char *s)
{
	char *start, *end, c;
	int i, count;
	int len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}

	count = len;
	start = s;
	end = s;

	for (i = 0, i < count - 1; i++)
	{
		end++;
	}

	for (i = 0; i < count / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;

		start++;
		end--;
	}
}
