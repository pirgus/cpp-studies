// fila
#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
    int *data;
    int size;
} Queue;

Queue* create_queue(int size){
    Queue *fila = (Queue*) malloc(sizeof(Queue));
    if(fila == NULL){
        printf("There was an error creating the queue.\n");
    }
    else{
        fila->data = (int*) malloc(sizeof(int) * size);
        fila->size = size;
    }
    return fila;
}



int main(){
    Queue *fila = NULL;
    fila = create_queue(4);
    printf("sizeof data = %d\n", sizeof(fila->data));
    printf("fila->size = %d\n", fila->size);
    printf("sizeof(fila) = %d\n", sizeof(fila));

    return 0;
}