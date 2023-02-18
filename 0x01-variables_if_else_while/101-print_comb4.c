#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int units = '0';
	int tenth = '0';
	int hund = '0';

	for (hund = '0'; hund <= '9'; hund++)
	{
		for (tenth = '0'; tenth <= '9'; tenth++)
		{
			for (units = '0'; units <= '9'; units++)
			{
				if (!((units == tenth) || (tenth == hund) || (tenth > units) || (hund > tenth)))
				{
					putchar(hund);
					putchar(tenth);
					putchar(units);
					if (!(units == '9' && hund == '7' && tenth == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
