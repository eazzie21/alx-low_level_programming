#include "main.h"
/**
 * *_memcpy - Copies memory area
 * @dest: Pointer where content is to be copied to
 * @src: Source to be copied
 * @n: Bytes to be copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
