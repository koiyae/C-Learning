#include <stdio.h>

struct three_num{
    int n1, n2, n3;
};

int main(void) {
    int n = 1;
    struct three_num num;
    FILE* fptr;
    
    fptr = fopen("binary_file.bin", "wb");
    
    int flag = 0;
    num.n1 = n;
    num.n2 = 5 * n;
    num.n3 = 5 * n + 1;
    
    flag = fwrite(&num, sizeof(struct three_num), 1, fptr);

    if (!flag) {
        printf("Write operation failure!");
    } else {
        printf("Write operaton successful");
    }
    
    fclose(fptr);
    return 0;
}
