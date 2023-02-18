#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
