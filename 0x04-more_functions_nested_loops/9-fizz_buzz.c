#include "main.h"

/**
 * _fizz_buzz - prints from 1 to 100
 * @c : character to check
 * Return:fizz, buzz, fizzbuzz
 */

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
