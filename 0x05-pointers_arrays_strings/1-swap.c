#include "main.h"
/**
* swap_int - Swaps the values of two integers.
* @a: A pointer to the first integer.
* @b: A pointer to the second integer.
*
* Description: This function takes two integer pointers as parameters and
* swaps the values of the integers they point to.
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a; /* Store the value of a in a temporary variable */
*a = *b;   /* Update the value of a with the value of b */
*b = temp; /* Update the value of b with the original value of a */
}

