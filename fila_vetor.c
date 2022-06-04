#include "fila_vetor.h"
#include <stdio.h>
#include <stdlib.h>

FILA* fila_criar (void) {
    FILA* f = (FILA*) malloc(sizeof(FILA));
    f->n = 0;
    f->primeiro = 0;
    return f;
}

void fila_inserir(FILA* f, float info) {
    int fim;
    if(f-N == N){
        printf("Capacidade da fila estourou!");
        return;
    } 
    fim = (f->primeiro + f->n) % N;
    f->vet[fim] = info;
    f->n++;
}

float fila_remover(FILA* f){
    float info;
    if(fila_vazia(f)){
        printf("Fila vazia!\n");
        return -1;
    }
    info = f->vet[f->primeiro];
    f->primeiro = (f->primeiro + 1) % N;
    f->n--;
    return info;
}

int fila_vazia(FILA* f){
    return f->n == 0;
}

void fila_liberar(FILA* f){
    free(f);
}

void fila_imprimir(FILA* f){
    int i;
    for(i = 0; i < f->n; i++){
        printf("%f", f->vet[(f->primeiro +i ) % N]);
    }
}
