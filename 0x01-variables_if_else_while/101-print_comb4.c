#include <stdio.h>
/**
 * main - main block
 * Description: This program prints all differnet combinaions
 * of three digits
 * Return: 0
 */

int main(void)
{
	int left;
	int right;
	int centre;

	for (left = 48; left <= 57; left++)
	{
		for (centre = left + 1; centre <= 57; centre++)
		{
			for (right = centre + 1; right <= 57; right++)

			{
				putchar(left);
				putchar(centre);
				putchar(right);

				if ((left == 55) && (centre == left + 1) && (right == centre + 1))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

