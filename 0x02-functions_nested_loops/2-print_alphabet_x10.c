#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char chr;
	int a;

	a = 0;
	while (a < 10)
	{
		chr = 'a';
		while (chr <= 'z')
		{
			_putchar(chr);
			chr++;
		}
		_putchar('\n');
		a++;
	}
}

