#include "main.h"

/**
 * _strlen - return the length of astring
 * @s: string to check
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

