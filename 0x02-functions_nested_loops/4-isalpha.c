#include "main.h"

/**
 * _isalpha - checks for aphabet either lower or upper
 * @c: character to check
 * Return: 1 if alphabet else 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
