#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * C: is the int that will use for as an argument of the function
 * Return: 1 if uppercase character and return 0 if not
 */

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

