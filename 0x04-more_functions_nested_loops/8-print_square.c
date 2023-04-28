#include "main.h"

/**
 * _print_square.c - prints a square followed by a new line
 * @size : character to check
 * Return: a new line if size < 0
 */

void print_square(int size) {
    if (size <= 0) {
        _putchar('\n');
        return;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            _putchar('#');
        }
        _putchar('\n');
    }
}
