#include <stdio.h>
/* Function to reset the value pointed to by the pointer to 98 */
void reset_to_98(int *n)
/* Function to reset the value pointed to by the pointer to 98 */
{
*n = 98;
}
int main(void)
/*Parentheses added for clarity*/
{
/*Parentheses added for clarity*/
int num = 42;
printf("Original value: %d\n", num);
/*Calling the function to reset the value to 98 */
reset_to_98(&num);
printf("Updated value: %d\n", num);
return (0);  /* Parentheses added as required*/
};
