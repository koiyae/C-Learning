// Stack Segment
/*
    1. A stack armazena variáveis locais, parâmetros de funções e retorna endereços para cada chamada de função
    2. Cada chamada de função cria um stack frame no segmento
    3. A stack está comumente em endereços de memória mais altos e cresce oposta à heap
    4. Quando a stack e a heap se encontram, a memória livre do programa está esgotada
*/
void func();

int main() {
    func();
    return 0;
}

void func() {
    // Armazenada na stack
    int local_var = 10;
}


