#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lower case 10 times
 *
 */

void print_alphabet_x10(void)
{
	int new_line, c;

	for (new_line = 0; new_line <= 9; new_line++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
