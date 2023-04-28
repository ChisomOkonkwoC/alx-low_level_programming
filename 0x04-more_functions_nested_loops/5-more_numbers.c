#include "main.h"

/**
 * _5-more_numbers.c prints 10 times nums 
 * from 0 to 14
 */
void more_numbers(void) {
    int i, j;
    char num[3]; 
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= 14; j++) {
            if (j < 10) {
                num[0] = j + '0'; 
                num[1] = '\0';
            } else {
                num[0] = (j / 10) + '0'; 
                num[1] = (j % 10) + '0'; 
                num[2] = '\0':
	    }
            printf("%s", num);
        }
        putchar('\n'):
    }
}
 
