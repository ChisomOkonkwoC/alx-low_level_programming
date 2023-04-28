#include "main.h"

/**
 * _7-print_diagonal.c - draws a diahonal line
 * @n : character to check
 * Return: a diagonal line ending with \n
 */

void print_diagonal(int n) {
    if (n <= 0) {
        _putchar('\n'); 
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            _putchar(' '); 
        }
        _putchar('\\');
        _putchar('\n');
    }
}

