#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

typedef struct {
    Node *start;
    int size;
} List;

void list_init(List *list);
void add_item_start(List *list, int value);
void add_item_end(List *list, int value);
void remove_item(List *list, int value);
void print_list(List *list);

int main(void) {
    List list;
    int option, value;

    list_init(&list);

    printf("1 - Inserir ao início da lista\n2 - Inserir ao fim da lista\n3 - Exibir a lista\n4 - Remover\n5 - Sair\n");

    do {
        printf("Escolha uma opção: ");
        scanf("%d", &option);
        switch (option) {

            case 1:
                printf("Insira o valor: ");
                scanf("%d", &value);
                add_item_start(&list, value);
                break;
            case 2:
                printf("Insira o valor: ");
                scanf("%d", &value);
                add_item_end(&list, value);
                break;
            case 3:
                print_list(&list);
                break;
            case 4:
                printf("Digite um valor a ser removido: ");
                scanf("%d", &value);
                remove_item(&list, value);
                break;
            case 5:
                printf("Finalizando o programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 5);

    return 0;
}

void list_init(List *list) {
    list->start = NULL;
    list->size = 0;
}

void add_item_start(List *list, int value) {
    Node *new_node = (Node*) malloc(sizeof(Node));

    new_node->value = value;
    new_node->next = list->start;
    list->start = new_node;
    list->size++;
}

void add_item_end(List *list, int value) {
    Node *new_node, *node;

    new_node = (Node*) malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = NULL;

    if (list->start == NULL) {
        list->start = new_node;
        list->size++;
    } else {
        node = list->start;

        while(node->next != NULL) {
            node = node->next;
        }

        node->next = new_node;
    }
    list->size++;
}

void remove_item(List *list, int value) {
    Node *start = list->start;
    Node *node_to_remove = NULL;
    
    if (start != NULL && start->value == value) {
        node_to_remove = list->start;
        list->start = node_to_remove->next;
    } else {
        while(start != NULL && start->next != NULL && start->next->value != value) {
            start = start->next;
        }
        
        if (start != NULL && start->next != NULL) {
            node_to_remove = start->next;
            start->next = node_to_remove->next;
        }
    }
    
    if (node_to_remove != NULL) {
        free(node_to_remove);
        list->size--;
    }
}


void print_list(List *list) {
    Node *start = list->start;

    while (start != NULL) {
        printf("%d ", start->value);
        start = start->next;
    }

    printf("\n\n");
}
