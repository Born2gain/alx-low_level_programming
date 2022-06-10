#include "main.h"

/*
 * print_alphabet_x10 - run the code
 *
 * Description: return the result
 *
 *Return: return void
 */

void print_alphabet_x10(void)
{
	char i;
	int start;

	for (start = 0; start < 10; start++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}	
}
