#include "main.h"
/**
<<<<<<< HEAD
* _puts - Prints a string, followed by a new line, to stdout.
* @str: The string to be printed.
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
=======
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
>>>>>>> 66be7a9be1e8789d03944c9b58acb0d3cb0273f1
}
