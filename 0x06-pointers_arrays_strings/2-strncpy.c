#include "main.h"
#include <stdio.h>
/**
 * _strnpy - copies a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Retrun: dest
 */
char *_strnpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
