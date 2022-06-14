#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * @src: char pointer variable
 * @dest: char pointer variable
 *
 * Return: sequence of characters
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
