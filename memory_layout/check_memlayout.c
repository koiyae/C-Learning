#include <stdio.h>
#include <stdlib.h>

// Variável global
int gvar = 66;
// Variável global constante
const int cgvar = 1010;
// Variável global não inicializada
int ugvar;

void foo(void);

int main(void) {
    // Variável na heap
    int *hvar = malloc(sizeof(*hvar));
    
    // O uso do (void*)&foo abaixo é apenas uma exemplificação
    // A conversão de ponteiro de função em ponteiro de objeto é proibida pelo padrão ISO C
    printf("Endereço de foo:\t%p\n", (void*)&foo);
    
    printf("Endereço de cgvar:\t%p\n", (void*)&cgvar);
    printf("Endereço de gvar:\t%p\n", (void*)&gvar);
    printf("Endereço de ugvar:\t%p\n", (void*)&ugvar);
    printf("Endereço de hvar:\t%p\n", (void*)&hvar);
    foo();
    
    return 0;
}

void foo(void) {
    // Variável local
    int lvar = 1;
    
    printf("Endereço de lvar: \t%p\n", (void*)&lvar);
}