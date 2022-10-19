#include <stdio.h>

/**
 * main - Print the alphabet in lower case except e and q, followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lw;

	for (lw = 'a'; lw <= 'z'; lw++)
		if (lw != 'e' && lw != 'q')
			putchar(lw);
	putchar('\n');
	return (0);
}
