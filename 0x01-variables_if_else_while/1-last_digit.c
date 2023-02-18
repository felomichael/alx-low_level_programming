#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program will assign a random number to the variable n each time it is executed
 * Reaturn: Always 0 (Success)
 */
int main(void)
{
	int n;
	int num;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of is ", n);
	num = n % 10
	if (num > 5)
	{
		printf("%d and is greater than 5\n", num);
	}
	else if (num = 0)
		printf("%d and is 0\n", num);
	else if (num > 0)
		printf("%d and is less than 6\n", num);
	return (0);
}
