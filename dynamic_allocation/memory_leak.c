#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(sizeof(*ptr));

    *ptr = 10;
    printf("%d\n", *ptr);

    return 0;
}
