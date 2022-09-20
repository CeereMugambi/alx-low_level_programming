#include "main.h"
#include <stdio.h>

/**
 *swap_int -swap values of integers a and b
 *@a: A pointer to an int that is updated
 *@b:B pointer to an int that is updated
 *Return: void meaning output is correct
 */

void swap_int(int *a, int *b)
{
	int f;
	f = *a;
	*a = *b;
	*b = f;
}
