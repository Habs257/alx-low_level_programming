#include "main.h"
/**
* _isupper -check if upercase letters
* @c: char to check in the program
* return: if upercase return 1, else return 0
*/
int _isupper(int c)
/**_isupper  is a function that return if it is upper or not upercase*/
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
