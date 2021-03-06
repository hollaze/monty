#include "monty.h"

/**
 * _isdigit - checks if string has a digit
 * @c: variable to check
 * Return: 0 if c is a digit. 1 otherwise
 */

int _isdigit(char *c)
{
	int i = 0;

	if (c == NULL)
		return (1);

	while (c[i])
	{
		if (isdigit(c[i]) == 0 && c[i] >= '0')
			return (1);
		i++;
	}

	return (0);
}
