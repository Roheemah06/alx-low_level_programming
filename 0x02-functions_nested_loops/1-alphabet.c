#include "main.h"

/**
 * main - Print_alphabet
 * Description: Print alphabet in lower case followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
