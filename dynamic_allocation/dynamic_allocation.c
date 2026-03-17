/*
    A alocação dinãmica de memória permite o programador alocar, redimensionar e liberar memória
    em tempo de execução. Algumas vantagens chave incluem:
        1. A memória é alocada na heap em vez da stack
        2. O tamanho de um array pode ser diminuído ou aumentado de acordo com a necessidade
        3. A memória persiste mesmo depois que a função que a alocou termina, permitindo que funções
        retornem ponteiros para ela. É diferente das variáveis alocadas na stack, pois não é seguro
        retornar os endereços destas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   
    // Alocar inicialmente a memória para 5 inteiros
    int *ptr = malloc(5 * sizeof(*ptr));
    
    // Verificar se a alocação foi bem-sucedida
    if (ptr == NULL) {
        printf("A alocação de memória falhou\n");
        exit(0);
    }
    
    // Agora, precisamos armazenar 8 elementos, então realocamos a memória para isso
    ptr = realloc(ptr, 8 * sizeof(*ptr));
    
    // Verificar se a realocação foi bem-sucedida
    if (ptr == NULL) {
        printf("A realocação de memória falhou\n");
        exit(0);
    }
    
    // Assumir que temos 5 elementos agora
    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }
    
    
    // Encolher o array de volta a 5 elementos
    ptr = realloc(ptr, 5 * sizeof(*ptr));
    
    // Checar se o encolhimento funcionou
    if (ptr == NULL) {
        printf("A realocação de memória falho\n");
        exit(0);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    
    printf("\n");
    
    // Liberar a memória quando terminar
    free(ptr);
    ptr = NULL; // Evitar dangling pointer (faz sentido se for usado depois ou é variável global/estática)
    
    return 0;
}