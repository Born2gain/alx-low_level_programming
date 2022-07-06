include <stdio.h>
/**
 * print_name - print a name
 * @name: string pointer
 * @f: pointer to a function
 * Dsecription: return the required result
 *
 * Return: return void
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
