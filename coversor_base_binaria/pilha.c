#include "pilha.h"
#include <stdio.h> // Para printf (em caso de erros)
#include <stdlib.h> // Para malloc e free

// Cria e inicializa uma pilha vazia
Pilha* criar_pilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha)); // Aloca memória para a struct Pilha
    pilha->topo = NULL; // A pilha começa vazia (topo aponta para NULO)
    return pilha;
}

// Verifica se a pilha está vazia
int esta_vazia(Pilha* pilha) {
    return (pilha->topo == NULL); // Retorna 1 (true) se o topo for NULO, 0 (false) caso contrário
}

// Insere um elemento no topo da pilha (push)
void push(Pilha* pilha, int valor) {
    Node* novo_no = (Node*) malloc(sizeof(Node)); // 1. Aloca memória para o novo nó
    if (novo_no == NULL) {
        printf("Erro: Falha na alocação de memória (malloc)!\n");
        return;
    }
    novo_no->valor = valor;      // 2. Define o valor do nó
    novo_no->prox = pilha->topo; // 3. O "próximo" do novo nó é o antigo topo
    pilha->topo = novo_no;       // 4. Atualiza o topo da pilha para ser o novo nó
}

// Remove e retorna o elemento do topo da pilha (pop)
int pop(Pilha* pilha) {
    if (esta_vazia(pilha)) {
        printf("Erro: A pilha está vazia (stack underflow)!\n");
        return -1; // Retorna um valor de erro
    }
    Node* temp = pilha->topo;     // 1. Salva o nó do topo atual
    int valor_removido = temp->valor; // 2. Guarda o valor que será retornado
    pilha->topo = temp->prox;     // 3. Atualiza o topo para ser o nó *abaixo* do atual
    free(temp);                   // 4. Libera a memória do nó que foi removido
    return valor_removido;        // 5. Retorna o valor
}

// Apenas consulta o valor no topo (sem remover)
int top(Pilha* pilha) {
    if (esta_vazia(pilha)) {
        printf("Erro: A pilha está vazia!\n");
        return -1;
    }
    return pilha->topo->valor;
}

// Libera toda a memória alocada para a pilha
void liberar_pilha(Pilha* pilha) {
    Node* atual = pilha->topo;
    Node* proximo;
    while (atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    free(pilha); // Libera a struct da pilha em si
}