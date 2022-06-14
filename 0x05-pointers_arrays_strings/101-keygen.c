#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random_pass, i, total;

	srand(time(NULL));
	i = 0;
	total = 2772;

	while (total > 122)
	{
		random_pass = (rand() % 125) + 1;
		printf("%c", random_pass);
		total -= random_pass;
		i++;
	}
	printf("%c", total);

	return (0);
}
