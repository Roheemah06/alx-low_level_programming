#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet 10x to sdiout
 * Description: print_alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
