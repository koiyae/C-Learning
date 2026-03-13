// Uninitialized Data Segment (Data Segment)
/*
    1. O segmento de dados não inicializado é frequentemente chamado de BSS
    2. Armazena as variáveis estáticas/globais que não foram inicializadas pelo programador
    3. Tais variáveis são automaticamente inicializadas como 0 pelo sistema em tempo de execução
*/
#include <stdio.h>

/* Variáveis globais não inicializadas (Armazenadas no segmento BSS)
BSS = Block Started by Symbol */
int global_var;
char message[50];

int main(void) {
    static int static_var;
    
    global_var = 10;
    static_var = 20;
    snprintf(message, sizeof(message), "Hello BSS");
    
    printf("Global variable: %d\n", global_var);
    printf("Static variable: %d\n", static_var);
    printf("Message: %s\n", message);

    return 0;
}