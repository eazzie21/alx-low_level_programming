#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number
 * @n: Number to be checked
 * Return: 1 if n is greater than 0, 0 if n is zero,
 * and -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
