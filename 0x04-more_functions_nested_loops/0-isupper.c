#include "main.h"

/**
 *_isupper - checks the code
 *@c: stores the letters
 *Return: Returns a value of 1 if it contains an uppercase
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
