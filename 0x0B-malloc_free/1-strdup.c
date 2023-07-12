#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *test;
	int a, r = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	test = malloc(sizeof(char) * (a + 1));
	if (test == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		test[r] = str[r];
	return (test);
}
