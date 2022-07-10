#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int new_num1,new_num2;

	for (new_num1 = 48; new_num1 <= 57; new_num1++)
	{
		for (new_num2 = 47; new_num2 <= 57; new_num2++)
		{
			if (new_num2 > new_num1)
			{
				putchar(new_num1);
				putchar(new_num2);
				if (new_num1 == 56)
					continue;
				
				putchar(',');
				putchar(10); //ascii code for new line
			}
		}
	}

	putchar(10);


return (0);
}
