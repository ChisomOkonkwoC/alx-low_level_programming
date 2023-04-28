#include "main.h"

/**
 * _6-print_line.c - draws a straight line
 * @n : character to check 
 * Return: A line that ends with \n
 */

void print_line(int n) {
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            _putchar('_');
        }
    }
    _putchar('\n');
}
