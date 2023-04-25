#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	int a;
	int b = 0;

	while (a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

