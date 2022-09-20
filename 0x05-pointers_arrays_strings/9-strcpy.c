#include "main.h"

/**
 * _strcpy - Copies string pointed to another string
 * @dest: Pointer to char that will be uodated
 * @src: Pointer to char that wil be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
