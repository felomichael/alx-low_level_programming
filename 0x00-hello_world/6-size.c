#include <stdio.h>
/**
 * main - program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;
printf("int size: %lu byte(s\n", (unsigned long)sizeof(a));
printf("char size: %lu byte(\n", (unsigned long)sizeof(b));
printf("float size: %lu bytes\n", (unsigned long)sizeof(c));
printf("long int size: %lu bytes\n", (unsigned long)sizeof(d));
printf("long long int size: %lu bytes\n", (unsigned long)sizeof(e));
return (0);
}
