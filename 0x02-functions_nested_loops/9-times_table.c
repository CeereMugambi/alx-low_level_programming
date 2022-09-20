#include "main.h"

/**
 * times_table - Prints the 9 times table
 * 
 * Example Table
 * 0, 0,  0, 0, 0,..
 * 0, 1, 2, 3, 4, ..
 *
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/**
			 * put spacing if product is a single number
			 * put first digit if it has two number
			 */

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar ((prod / 10) + 48); /*get first digit*/

			_putchar((prod % 10) + 48); /*get second digit*/
		}
		_putchar('\n');
	}
}
