#include "main.h"

/**
 * more_numbers - Print 0-14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int 1, row, count;

	for (row = 1; row <= 10, row++)
	{
		for (count = 0; count <= 14; count ++)
		{
			i = count;
			if (count > 9)
			{
				_putchar(1 +48);
				i = count % 10;
			}
			_putchar('\n');
		}

	}
}
