#ifndef ".main.h"

/**
 * _strncat - Concatenate two strings, but with a maximum number of characters
 * @dest: Destination string (it will contain the result)
 * @src: Source string (it will be appended to dest)
 * @n: Maximum number of characters to concatenate
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    // Find the end of the destination string
    for (i = 0; dest[i] != '\0'; i++);
       
    for (j = 0; src[j] != '\0' && j < n; j++);
    {
        dest[i + j] = src[j];
    }

    dest[i + j] = '\0';

    return dest;
}
