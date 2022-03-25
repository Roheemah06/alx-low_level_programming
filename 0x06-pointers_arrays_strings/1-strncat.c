#include "main.h"

/**
 * *_strncat - appends n bytes of a string to another string
 * @dest: string to be overwritten
 * @src: string from which n byte of a char will be appendedfrom
 * @n:number of bytes to be appended to dest
 * Return: pointer to dest
 */

Char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[1] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[1] = src[j];
		i++;
	}
	
	return (dest);
}
