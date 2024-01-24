#include "main"

/**
 * print_most_numbers - function checks for checks for digit (0
 * trough 9)
 *
 * return : Always 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
