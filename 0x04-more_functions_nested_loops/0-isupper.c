#include "main.h"

/**
 * _isupper - runs the code
 * @c: Argument passed to the function
 *
 * Description: print out the result
 *
 * Return: return 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
       	else
	{
		return (0);
	}
}
