// implementacao de lista em C
// com alocacao de dados estática

#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct Lista{
    int data[N];
    int size;
} Lista;

Lista *create_list(){
    Lista *l = malloc(sizeof(Lista));
    if(l == NULL){
        printf("Error creating list...\n");
        return -1;
    }

    l->size = 0;
    return l;
}

int list_size(Lista *l){
    if(l != NULL){
        return l->size;
    }
    else{
        return -1;
    }
}

int add_to_list(int el, Lista *l){
    if(l != NULL && l->size < N){
        l->data[l->size] = el;
        l->size++;
        return l->size-1;
    }
    else{
        printf("Uncreated list OR full list!\n");
    }
}

void print_list(Lista *l){
    if(l != NULL){
        printf("[ ");
        for(int i = 0; i < l->size; i ++){
            if(i < l->size - 1){
                printf("%d, ", l->data[i]);
            }
            else{
                printf("%d", l->data[i]);
            }
        }
        printf(" ]\n");
    }
}

int main(){
    Lista *lista = NULL;
    lista = create_list();
    int size = list_size(lista);
    printf("list size = %d\n", size);
    int pos = add_to_list(2, lista);
    pos = add_to_list(4, lista);
    add_to_list(5, lista);
    add_to_list(3, lista);
    size = list_size(lista);
    printf("list size = %d\n", size);
    print_list(lista);

    return 0;
}