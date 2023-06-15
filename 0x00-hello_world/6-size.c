#include <stdio.h>

/**
 * main - The program where i can test my code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;
	int a;
	long int f;
	long long int e;
	float d;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
