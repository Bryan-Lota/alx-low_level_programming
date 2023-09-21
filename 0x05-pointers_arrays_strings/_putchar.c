<<<<<<< HEAD
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 * Return: On success, 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

=======
/* _putchar - writes a character to stdout */
int _putchar(char c)
{
return write(1, &c, 1);
}
>>>>>>> 66be7a9be1e8789d03944c9b58acb0d3cb0273f1
