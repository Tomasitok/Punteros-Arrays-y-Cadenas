#include "main.h"
#include <string.h>
/**
 * 
 * 
 * 
*/
void puts_half(char *str)
{
    int length = strlen(str);
    int start;
    if (length % 2 == 0) 
    {
        start = length / 2;
    } else 
    {
        start = (length - 1) / 2;
    }
    for (int i = start; i < length; i++) 
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}