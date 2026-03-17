#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(5 * sizeof(*ptr));
    
    // Redimensiona, por realocação, o bloco de memória para guardar 10 inteiros
    int *temp  = realloc(ptr, 10 * sizeof(*ptr));
    
    // Checagem se a realocação falhou
    if (temp == NULL) {
        printf("A realocação de memória falhou\n");
    } else {
        ptr = temp;
    }

    return 0;
}

// PS: realloc(ptr, 0) faz o mesmo que free(ptr)