#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
