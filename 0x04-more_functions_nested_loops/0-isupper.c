include "main.h"

/**
 * _isupper - check if the argument is upper case
 *
 * Description: print out the required result
 *
 * Return: return 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
		return (0);
}
