#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 *Description: It prints the new word _putchar,followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[9] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	return (0);
}
