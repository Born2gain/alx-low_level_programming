#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: argument
 *
 */

void puts2(char *str)
{
        int i, j;
	
	for (i = 0; str[i] != '\0'; i++)
        {
                ;
        }
	
        for (j = 0; j < i; j += 2)
        {
                _putchar(str[j]);
        }
        _putchar(10);
}
