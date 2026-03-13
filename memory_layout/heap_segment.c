// Heap Segment
/* 
   1. Utilizado para alocação dinâmica de memória
   2. Inicia ao fim do segmento BSS e cresce em direção a endereços de memória maiores
   3. A memória na heap é gerenciada usando funções como malloc(), realloc(), calloc() e free()
   4. A heap é compartilhada por todas as bibliotecas compartilhadas e módulos dinamicamente carregados em um processo
*/
#include <stdlib.h>

int main(void) {
    // Cria um ponteiro para int
    int *ptr = malloc(sizeof(*ptr) * 10);
    return 0;
}
