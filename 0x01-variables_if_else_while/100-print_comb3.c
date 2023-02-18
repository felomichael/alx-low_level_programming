#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int units = '0';
	int tenth = '0';

	for (tenth = '0'; tenth <= '9'; tenth++)
	{
		for (units = '0'; units <= '9'; units++)
		{
			if (!((units == tenth) || (tenth > units)))
			{
				putchar(tenth);
				putchar(units);
				if (!(units == '9' && tenth == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
