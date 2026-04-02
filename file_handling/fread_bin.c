#include <stdio.h>

struct three_num {
    int n1, n2, n3;
};

int main(void) {
    int n;
    struct three_num num;
    FILE* fptr;
    
    fptr = fopen("binary_file.bin", "rb");
    
    fread(&num, sizeof(struct three_num), 1, fptr);
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    fclose(fptr);
    
    return 0;
}
