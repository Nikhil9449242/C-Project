#include <stdio.h>

void factorial() {
    int i, fact = 1, number = 5;
    for(i = 1; i <= number; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", number, fact);
    return 0;
}

