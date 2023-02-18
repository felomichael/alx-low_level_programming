#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the alphabet in lower and upper
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower = 'a';
	int upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}
