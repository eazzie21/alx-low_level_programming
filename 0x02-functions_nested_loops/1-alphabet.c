#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char alph1;

	alph1 = 'a';

	while (alph1 <= 'z')
	{
		_putchar(alph1);
		alph1++;
	}

	_putchar('\n');
}
