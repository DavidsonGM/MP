// Copyright 2021 David Mendes

#include <stdlib.h>
#include <iostream>
#include <pilha.hpp>


int main() {
    // Pilha *pilha = criarPilha();
    // push(pilha, 3);
    // push(pilha, 7);
    // pop(pilha);
    // displayTop(pilha);
    // free(pilha);

    Elemento* pilha = reinterpret_cast<Elemento*>(malloc(sizeof(Elemento)));
    pilha->valor = 32;
    pilha->proximo = NULL;
    push(&pilha, 2);
    push(&pilha, 5);
    push(&pilha, 4);
    pop(&pilha);
    displayTop(pilha);

    esvaziarPilha(pilha);

    return 0;
}
