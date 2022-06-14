#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: argument
 *
 */

void puts2(char *str)
{
	char *i = str;
	int len = 0;
	int j;

	while (*i != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j <= (len - 1); j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
}
