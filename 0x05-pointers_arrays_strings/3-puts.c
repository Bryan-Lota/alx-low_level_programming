#include "main.h"
/**
* _puts - Prints a string followed by a new line to stdout.
* @str: The input string.
*/
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str); // Print each character of the string
str++;
}
putchar('\n'); // Print a new line at the end
}
