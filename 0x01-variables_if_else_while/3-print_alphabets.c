#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int uc;

	for (uc = 'a'; uc <= 'z'; uc++)
		putchar(uc);
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);
	putchar('\n');
	return (0);
}
