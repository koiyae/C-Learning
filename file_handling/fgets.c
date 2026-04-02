#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fptr;
    
    char data[50];
    
    fptr = fopen("file.txt", "r");
    
    if (fptr == NULL) {
        printf("file.txt failed to open");
    } else {
        printf("The file is noew opened.\n");
        
        while (fgets(data, 50, fptr) != NULL) {
            printf("%s", data);
        }
        
        fclose(fptr);
    }
    
    return 0;
}