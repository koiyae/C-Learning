#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(5 * sizeof(*ptr));
    
    // Checagem se a alocação falhou
    if (ptr == NULL) {
        printf("A alocação de memória falhou\n");
        exit(0);
    }
    
    // Popular o array
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    
    // Imprimir o array
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    // Liberar a memória depois de completar as operações
    free(ptr);
    ptr = NULL;
    
    return 0;
}

