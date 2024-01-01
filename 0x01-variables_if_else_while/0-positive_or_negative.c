#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Include the necessary header for printf
* betty style doc for function main goes there */
int main(void)
/*main function initializes a random number, prints
*a message in French stating that a number is about
*to be displayed, and then classifies and prints
*the nature of the number (positive, zero, or negative)
*based on the conditions specified in the code*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	printf("Le nombre est %d : ", n);

	if (n > 0)
		printf("est positif\n");
	else if (n == 0)
		printf("est zéro\n");
	else
		printf("est négatif\n");

	return (0);
}

