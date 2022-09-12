#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: This program prints all possible different combinations of 2 digits
 * Return: 0
 */

int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		if (d != c && d < c)
		{
			putchar('0' + d);
			putchar('0' + c);

			if (c +  d != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}

		c++;
	}

	d++;
}
putchar('\n');
return (0);
