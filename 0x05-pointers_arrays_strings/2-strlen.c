#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string
 * return: length
 */
int _strelen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
