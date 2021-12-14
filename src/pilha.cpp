// Copyright 2021 David Mendes

#include <pilha.hpp>
#include <stdlib.h>
#include <iostream>
#include <limits>

Pilha* criarPilha() {
    Pilha* pilha = reinterpret_cast<Pilha*>(malloc(sizeof(Pilha)));
    pilha->topo = -1;
    return pilha;
}

void pop(Pilha* pilha) {
    if (pilha->topo == -1) {
        std::cout << "\nNão foi possível retirar elemento: Pilha vazia.\n\n";
        exit(0);
    }
    pilha->topo--;
}

void push(Pilha* pilha, int elemento) {
    if (pilha->topo == MAX - 1) {
        std::cout << "\nNão foi possível inserir elemento: Pilha cheia.\n\n";
        exit(0);
    }
    pilha->elemento[++pilha->topo] = elemento;
}

int top(Pilha* pilha) {
    if (pilha->topo == -1)
        return std::numeric_limits<int>::min();
    return pilha->elemento[pilha->topo];
}

void displayTop(Pilha *pilha) {
    if (top(pilha) != std::numeric_limits<int>::min())
        std::cout << "\nO Elemento do topo é: "<<  top(pilha) << std::endl;
    else
        std::cout << "\nNão foi possível acessar elemento: Pilha vazia.\n";
}


void push(Elemento** pilha, int valor) {
    Elemento* elemento = reinterpret_cast<Elemento*>(malloc(sizeof(Elemento)));
    elemento->valor = valor;
    elemento->proximo = *pilha;
    (*pilha) = elemento;
}

void pop(Elemento** pilha) {
    if (*pilha != NULL) {
        Elemento* aux = *pilha;
        *pilha = (*pilha)->proximo;
        free(aux);
    } else {
        std::cout << "\nNão foi possível retirar elemento: Pilha vazia.\n";
    }
}

int top(Elemento* pilha) {
    if (pilha == NULL)
        return std::numeric_limits<int>::min();
    return pilha->valor;
}

void displayTop(Elemento *pilha) {
    if (top(pilha) != std::numeric_limits<int>::min())
        std::cout << "\nO Elemento do topo é: "<<  top(pilha) << std::endl;
    else
        std::cout << "\nNão foi possível acessar elemento: Pilha vazia.\n";
}


void esvaziarPilha(Elemento *pilha) {
    while (top(pilha) != std::numeric_limits<int>::min()) {
        pop(&pilha);
    }
}
