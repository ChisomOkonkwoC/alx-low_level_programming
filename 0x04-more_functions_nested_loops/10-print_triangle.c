#include "main.h"

/**
 * _print_triangle - prints a triangle, followed by a new line
 * @size : character to check
 * Return: a new line if size <= 0
 */

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
        return;
    }
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}
