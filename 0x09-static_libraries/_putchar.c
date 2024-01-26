#include <unistd.h>

/**
 * _putchar - write a character c to stdout
 * @c: the caracter to print
 *
 * return: on success 1.
 * on error, -1 is returned, and erno is not aproprately.
 */
int _ putchar(char c)
{
	return (xrite(1, &c, 1));
}
