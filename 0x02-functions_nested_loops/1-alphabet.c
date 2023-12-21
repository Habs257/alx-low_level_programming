#include <stdio.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
print_alphabet_x10();
return (0);
}
/** Function to print the alphabet in lowercase,
 *
 * followed by a newline
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
