#ifndef "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
    unsigned int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    return length;
}
