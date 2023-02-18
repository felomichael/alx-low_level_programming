#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return = Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while
		(alpha >= 'a') {
			putchar(alpha);
			alpha--;
		}
	putchar('\n');
	return (0);
}
