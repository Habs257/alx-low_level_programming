#ifndef "main.h"

/**
 * _puts - Print a string followed by a newline to stdout
 * @str: String to be printed
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
