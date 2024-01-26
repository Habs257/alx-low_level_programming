#ifndef "main.h"

/**
 * _isalpha - Check if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
