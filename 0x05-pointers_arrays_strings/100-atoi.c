#include "main.h"

/**
 * is_numerical - check if digit
 * @n: number
 * Return: if number return 1 else 0
 */

int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: Return the num
 */

int _atoi(char *s)
{
	unsigned int num, i;
	int sign;

	sign = 1;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			num = (s[i] - 48) + num * 10;

			if (s[i + 1] == ' ')
				break;
		}

		else if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	return (num * sign);
}
