#ifndef "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack: String to search in
 * @needle: Substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;

        while (*haystack && *n && *haystack == *n)
        {
            haystack++;
            n++;
        }

        if (!*n)
            return h;

        haystack++;
    }

    return NULL;
}
