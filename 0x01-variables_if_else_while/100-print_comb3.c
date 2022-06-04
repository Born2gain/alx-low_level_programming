#include <stdio.h>

/**
* main - Print numbers from 00 to 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int A;
	int B;

		for (A = 0; A <= 9; A++)
   		 {
		 for (B = 0; B <= 9; B++)
	{
	  putchar(A + '0');
	  putchar(B + '0');

	  if (!(A == 9 && B == 9))
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');

  return (0);
}
