#ifndef "main.c"

/**
 * _strspn - Calculate the length of the initial segment of a string
 *            consisting of only characters from a specified set.
 * @s: String to check
 * @accept: Set of characters to match
 *
 * Return: Length of the initial segment that matches the set
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }

        if (accept[j] == '\0')
            break;
    }

    return count;
}
