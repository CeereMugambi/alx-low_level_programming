#include <stdio.h>
/**
 * main - main block
 * Description: This program prints all single numbers base 10
 * starting with 0
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
