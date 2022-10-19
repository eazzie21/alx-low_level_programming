#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char alph2;
	int myNum;

	myNum = 0;
	while (myNum < 10)
	{
		alph2 = 'a';

		while (alph2 <= 'z')
		{
			_putchar(alph2);
			alph2++;
		}
		_putchar('\n');
		myNum++;
	}
}
