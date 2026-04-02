#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr;

    fptr = fopen("filename.txt", "w");

    if (fptr == NULL) {
        printf("The file is not opened.\n");
    } else {
        printf("The file is created successfully.");
    }

    return 0;
}
