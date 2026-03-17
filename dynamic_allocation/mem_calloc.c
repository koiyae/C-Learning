#include <stdio.h>
#include <stdlib.h>

#define SAFE_FREE(ptr) do { free (ptr); (ptr) = NULL; } while(0)

int main(void) {
    int *ptr = calloc(5, sizeof(*ptr));
    
    // Checagem se a alocação falhou
    if (ptr == NULL) {
        printf("A alocação de memória falhou\n");
        exit(0);
    }
    
    // Sem necessidade de popular, pois já foi inicializado a 0
    
    // Imprimir o array
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    
    // Liberar a memória depois de completar as operações
    SAFE_FREE(ptr);
    
    return 0;
}