//#include "main.h"
#include <stdio.h>
/**
 * 
 *
 *
 */
//void print_alphabet_x10(void)
int main ()
{
	char samp = 'a';
	int start = 0;
	
	while (start <= 10)
	{
		while (samp <= 'z')
	        {
	                putchar(samp);
			putchar(' ');
			samp++;
	        }
		putchar('\n');
		start++;
	}
//	putchar(',');
	return (0);
}
