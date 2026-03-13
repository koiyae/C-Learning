// Variável não inicializada armazenada no BSS
int global[1000];

int main(void) {
    // Variável estática armazenada no Data Segment (Inicializado)
    static int i = 100;
    return 0;
}
