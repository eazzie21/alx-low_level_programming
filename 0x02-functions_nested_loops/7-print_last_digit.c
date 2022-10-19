#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @j: Number to be checked
 * Return: value of the last digit
 */
int print_last_digit(int j)
{
	int a;

	if (j < 0)
		j = -j;

	a = j % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
