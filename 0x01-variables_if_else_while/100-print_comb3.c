#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 10 ; a <= 19 ; a++)
	{
		for (b = 10 ; b <= 19 ; j++)
		{
			if (a % 10 < b % 10)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				if (a != 18 || b != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
