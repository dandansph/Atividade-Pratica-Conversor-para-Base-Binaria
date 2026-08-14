# 🚀 Conversor de Bases com Pilha

Projeto desenvolvido em **linguagem C** para demonstrar a implementação e utilização de uma **Pilha (Stack) dinâmica** como estrutura de dados.

A aplicação utiliza a pilha como componente central para realizar a conversão de números das bases **Decimal** e **Hexadecimal** para **Binário**, explorando conceitos como alocação dinâmica de memória, ponteiros, nós encadeados e modularização.

---

## 🛠️ Tecnologias

* **C**
* **GCC**
* **GitHub Codespaces**

---

## 📚 Sobre o Projeto

O projeto foi desenvolvido de forma modular, separando a implementação da estrutura de dados da lógica da aplicação.

### 🧱 Pilha Dinâmica

A estrutura de dados foi implementada utilizando **alocação dinâmica de memória** (`malloc` e `free`) e ponteiros.

A pilha é composta por nós (*Nodes*) encadeados, mantendo um ponteiro para o elemento localizado no topo.

Principais operações implementadas:

* `criar_pilha()` — Cria e inicializa uma nova pilha.
* `push()` — Insere um elemento no topo da pilha.
* `pop()` — Remove e retorna o elemento do topo.
* `top()` — Consulta o elemento no topo sem removê-lo.
* `esta_vazia()` — Verifica se a pilha está vazia.
* `liberar_pilha()` — Libera toda a memória utilizada pela pilha.

---

## 🔢 Conversão de Bases

### Decimal → Binário

A conversão utiliza a própria estrutura de pilha:

1. O número decimal é dividido sucessivamente por `2`.
2. Os restos das divisões (`0` ou `1`) são inseridos na pilha através de `push()`.
3. Os elementos são removidos utilizando `pop()`.
4. A ordem dos elementos removidos forma o número em sua representação binária correta.

### Hexadecimal → Binário

Para números hexadecimais:

1. O valor hexadecimal é recebido como uma `string`.
2. O valor é convertido para sua representação decimal.
3. A mesma lógica de conversão Decimal → Binário é aplicada.
4. Os resultados são organizados utilizando a estrutura de pilha.

---

## 📂 Estrutura do Projeto

```text
.
├── main.c      # Interface e lógica da aplicação
├── pilha.c     # Implementação da estrutura de pilha
├── pilha.h     # Definição da estrutura e funções da pilha
└── README.md   # Documentação do projeto
```

---

## ⚙️ Como Compilar e Executar

O projeto pode ser compilado utilizando o **GCC**.

### Compilação

```bash
gcc main.c pilha.c -o conversor -lm
```

### Execução

```bash
./conversor
```

---

## 🎯 Conceitos Demonstrados

* Estrutura de dados **Stack (Pilha)**
* Alocação dinâmica de memória
* Ponteiros em C
* Nós encadeados
* Manipulação de memória com `malloc` e `free`
* Modularização de código
* Conversão entre bases numéricas
* Gerenciamento de memória

---

## 📌 Objetivo

Demonstrar, de forma prática, como uma **estrutura de dados do tipo Pilha** pode ser aplicada na resolução de um problema real de processamento e conversão de números.

O projeto também reforça conceitos fundamentais de **programação em C, estruturas encadeadas e gerenciamento de memória**.
