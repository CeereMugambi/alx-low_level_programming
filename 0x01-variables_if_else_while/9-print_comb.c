#include <stdio.h>
/**
 * main - main block
 * Description: this program prints all possible combinations of a single digit
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number ++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
