#include <stdio.>
/**
* _putchar - writes a character to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriate
**/
int _putchar(char c)
{
return (putchar(c));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
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
