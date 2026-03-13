// Initialized Data Segment (Data Segment)
/*
 1. O segmento de dados (não necessariamente o inicialiado) armazena variáveis globais e estáticas do programa
 2. Variáveis no segmento de dados mantêm os seus valores durante a execução do programa
 3. O tamanho do segmento de dados depende do número e do tipo das variáveis estáticas/globais
 4. É dividido em inicializado e não inicializado (BSS - Block Started by Symbol)
 5. O segmento de data inicializado contém as variáveis estáticas/globais que foram inicializadas pelo programador
 */
#include <stdio.h>

// Variáveis globais (armazenadas no Initialized Data Segment)
int global_var = 10;
char message[] = "Hello";

int main(void) {
    // Variável estática (também aramazenada no Initialized Data Segment)
    static int static_var = 20;
    
    printf("Global variable: %d\n", global_var);
    printf("Static variable: %d\n", static_var);
    printf("Message: %s\n", message);
    
    return 0;
}