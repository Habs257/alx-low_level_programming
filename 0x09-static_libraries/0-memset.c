#include "main.h"
/**
 * The _memset function takes three parameters: a starting address s, a value `b
 * _memset - program fills a block of memory whith a specific value
 * @s: starting address of memory  to be filled
 * @b: the desired value
 * @n: number of bytes to be charged
 *
 * return: change array with new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
