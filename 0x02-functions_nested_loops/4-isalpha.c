#include "main.h"

/**
 * _islower - checks whether a character is lowercase or not.
 *
 * @c: character to be checked if alphabetical, type int
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
