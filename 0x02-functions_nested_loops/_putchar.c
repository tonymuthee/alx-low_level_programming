#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1); /* Implement the function to write a single character to the standard output */
};
