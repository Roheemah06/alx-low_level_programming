#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string to append to dest
 * @dest: string to be overwritten
 * Return: pointer to dest
 */

Char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[1] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[1] = src[j];
		i++;
	}

	dest[1] = src[j];

	return (dest);
}
