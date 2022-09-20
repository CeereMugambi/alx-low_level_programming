#include "main.h"

/**
 * main - main block
 * Description: prints _putchar
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(str[c]);
	_putchar('\n');

	return(0);
}

