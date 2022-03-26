#include "main.h"

/**
 * *_strncpy - copies strings from src to dest
 * @dest: buffer to receive the copied strings
 * @src: stringfrom which n bytes of a char is copied
 * @n: number of bytes strings to be copied
 * Return: pointer to the resulting dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
		b++;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
