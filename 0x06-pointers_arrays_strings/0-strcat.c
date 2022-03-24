#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string to append to dest
 * @dest: string to be overwritten
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];

	return (dest);
}