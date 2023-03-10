#include <stdio.h>
#include "main.h"

void my_puts(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}