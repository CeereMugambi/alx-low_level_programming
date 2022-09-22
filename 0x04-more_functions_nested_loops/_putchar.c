 #include <unistd.h>

/**
 * _putchar - writes character c to stout
 * @c: character to print
 * Return: 1 on success
 * on error, return -1 and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
