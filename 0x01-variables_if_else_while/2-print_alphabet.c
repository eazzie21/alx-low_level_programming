#include <stdio.h>

/**
 * main - Prints the alphabet in lower case, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lw;

	for (lw = 'a'; lw <= 'z'; lw++)
		putchar(lw);
	putchar('\n');
	return (0);
}
