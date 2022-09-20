#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: pointer to an int that will be updated
 * @n: return value n
 * Return: void when output is correct
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
		}

		i++;
	}

	printf("\n");
}
