#include <stdio.h>
int main()
{
	int start;
	char i;

	for (start = 0; start < 10; start++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
