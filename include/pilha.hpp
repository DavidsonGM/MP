// Copyright 2021 David Mendes

#define MAX 100

// Pilha de vetor de int

typedef struct _Pilha {
    int topo;
    int elemento[MAX];
} Pilha;

Pilha* criarPilha();
void push(Pilha* pilha, int elemento);
void pop(Pilha* pilha);
int top(Pilha* pilha);
void displayTop(Pilha *pilha);


// Pilha de lista encadeada

typedef struct _Elemento {
    int valor;
    struct _Elemento* proximo;
} Elemento;

void push(Elemento** pilha, int valor);
void pop(Elemento** pilha);
int top(Elemento* pilha);
void displayTop(Elemento* pilha);
void esvaziarPilha(Elemento *pilha);
