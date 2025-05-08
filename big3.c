#include <stdio.h>

void biggest3() {
    int a = 10, b = 20, c = 15;
    if(a > b && a > c)
        printf("Biggest: %d\n", a);
    else if(b > c)
        printf("Biggest: %d\n", b);
    else
        printf("Biggest: %d\n", c);
    return 0;
}

