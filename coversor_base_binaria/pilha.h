#ifndef PILHA_H
#define PILHA_H

#include <stdlib.h> // Para usar NULL

// 1. Definição do Nó (Node)
// Cada elemento da pilha será um "Nó"
typedef struct Node {
    int valor; // O valor que vamos armazenar (um dígito binário, 0 or 1)
    struct Node* prox; // Ponteiro para o próximo nó abaixo dele
} Node;

// 2. Definição da Pilha (Stack)
// A pilha em si, que só precisa saber quem está no topo
typedef struct Pilha {
    Node* topo; // Ponteiro para o nó do topo
} Pilha;

// 3. Protótipos das Funções Essenciais
Pilha* criar_pilha();                // Criação/Inicialização da ED
void push(Pilha* pilha, int valor);  // Função de Inserção (empilhar)
int pop(Pilha* pilha);               // Função de Remoção (desempilhar)
int top(Pilha* pilha);               // Função de Consulta (ver o topo)
int esta_vazia(Pilha* pilha);        // Função para verificar se está vazia
void liberar_pilha(Pilha* pilha);    // Função extra (boa prática) para limpar a memória

#endif // PILHA_H