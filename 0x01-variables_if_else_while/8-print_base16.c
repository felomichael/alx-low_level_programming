#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	int num;

	alpha = 'a';
	num = 0;
	while
		(num < 10) {
			putchar(num + '0');
			num++;
		}
	while
		(alpha <= 'f') {
			putchar(alpha);
			alpha++;
		}
	putchar('\n');
	return (0);
}
