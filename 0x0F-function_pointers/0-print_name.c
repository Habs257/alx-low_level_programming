#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name -print name using pointer to a function
 *@name: string to add
 *@f: function to the function
 *return nohing
 *
 */
void print_name(char *name, void(*f)(char *));
{
	if (name NULL || f == NULL)
		return;
	f(name);
}
