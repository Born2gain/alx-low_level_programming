#include "main.h"
/*
 * main:  prints _putchar, followed by a new line
 *
 * Description:  a program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

	int n = 0;
	char name[8] = "_putchar";

	while (n < 8)
		{
		_putchar(name[n]);
		n++;
		}
		_putchar('\n');
	return (0);
}
