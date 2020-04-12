#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct pilha {
    char* dados; //vetor de dados
    int topo; //idicador de topo (1ª posição disponivel)
    int capacidade; //tamanho do vetor escolhido pelo usuário
};
struct pilha* inicia_pilha (int capacidade){
    struct pilha* p;
    p = (struct pilha*) malloc (sizeof(struct pilha));
    if (p){
        p->dados = (char*) malloc(capacidade * sizeof(char));
        if (p->dados) {
            p->topo = 0;
            p->capacidade = capacidade;
        }
        else {
            return NULL;
        }
    }
    return p;
}
void push (char i, struct pilha* p){
    p->dados[p->topo] = i;
    p->topo++;
}
char pop(char* i, struct pilha* p){
    *i = p->dados[--p->topo];
    return *i;
}
int pilha_cheia(struct pilha* p){
    return (p->topo == p->capacidade);
      
}
int pilha_vazia(struct pilha* p){
    if (p->topo == 0){
        return 1;
    }
    return 0;
}
void libera( struct pilha* p) {
    free(p);
}
int main(){
    struct pilha* p1;
    struct pilha* p2;
    struct pilha* p3;
    struct pilha* p4;

    char letterIn[26], letterOut;
    int n, aux=0, i;
    scanf("%d",&n);
    while (n != 0) {
        p1 = inicia_pilha(n);
        p2 = inicia_pilha(n);
        p3 = inicia_pilha(n);
        p4 = inicia_pilha(n);

        while (!pilha_cheia(p1)) {
            for (i=0; i<n; i++) {
                scanf(" %c",&letterIn[i]);
                push(letterIn[i], p1);
            }
        }
        while (!pilha_cheia(p2)) {
            for (i=0; i<n; i++) {
                scanf(" %c",&letterIn[i]);
                push(letterIn[i], p2);
            }
        }
        do{
            if (p3->dados[p3->topo-1] != p2->dados[p2->topo-1] && !pilha_vazia(p1)) {
                push(pop(&letterOut, p1), p3);
                printf("I");
            }
            else if (p3->dados[p3->topo-1] == p2->dados[p2->topo-1] ) {
                push(pop(&letterOut, p3), p4);
                printf("R");
                pop(&letterOut, p2);
            }
            else if (pilha_vazia(p1) && !pilha_vazia(p2)){
                aux = 1;
                printf(" Impossible\n"); 
                break;
            }
            
        } while (!pilha_cheia(p4) || aux != 0);
        libera(p1);
        libera(p2);
        libera(p3);
        libera(p4);
        scanf("%d",&n);
    }
    return 0;
}