#include <stdio.h>

int main(void) {
    unsigned int a = 60; /* 60 = 0011 1100 */
    unsigned int b = 13; /* 13 = 0000 1101 */
    int c = 0;

    c = a & b;
    printf("Linha 1 - O valor de c é %d\n", c);

    c = a | b;
    printf("Linha 2 - O valor de c é %d\n", c);

    c = a ^ b;
    printf("Linha 3 - O valor de c é %d\n", c);
    
    c = ~a;
    printf("Linha 4 - O valor de  c é %d\n", c);

    c = a << 2;
    printf("Linha 5 - O valor de c é %d\n", c);

    c = a >> 2;
    printf("Linha 6 - O valor de c é %d\n", c);

    return 0;
}