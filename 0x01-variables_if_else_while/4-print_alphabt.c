#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if ((alpha != 'q' && alpha != 'e') && alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
	}

	putchar('\n');
	return (0);
}
