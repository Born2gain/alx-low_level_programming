#include <unistd.h>
/**
 * main - help to print out characters
 *
 *
 * return: always return 0
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
