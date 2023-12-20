#include <stdio.h>
/**
* _putchar - writes a character to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (putchar(c));
}
int main(void)
{
char text[] = "_putchar";
int i;
for (i = 0; text[i] != '\0'; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
