#include <stdio.h>
#include "menu.h"

static void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int exibirMenuPrincipal(void) {
    int op;

    while (1) {
        printf("\n=== SISTEMA MATEMATICO ===\n");
        printf("1) Modulo Fibonacci\n");
        printf("2) Modulo Fatorial\n");
        printf("3) Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &op) != 1) {
            printf("[Erro] Digite apenas numeros!\n");
            limpar_buffer();
            continue;
        }

        if (op >= 1 && op <= 3) return op;
        printf("[Erro] Opcao invalida.\n");
    }
}

int exibirSubMenu(const char titulo) {
    int opcao;

    while (1) {
        printf("\n--> %s\n", titulo);
        printf("1 - Recursivo\n");
        printf("2 - Iterativo\n");
        printf("3 - Voltar ao menu anterior\n");
        printf("Metodo: ");

        if (scanf("%d", &opcao) != 1) {
            printf("[Erro] Entrada invalida.\n");
            limpar_buffer();
            continue;
        }

        if (opcao >= 1 && opcao <= 3)
            return opcao;

        printf("[Erro] Opcao invalida.\n");
    }
}

unsigned long long fibo_rec(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibo_rec(n - 1) + fibo_rec(n - 2);
}

unsigned long long fibo_iter(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    unsigned long long n2 = 0, n1 = 1, atual = 0;

    for (int i = 2; i <= n; i++) {
        atual = n1 + n2;
        n2 = n1;
        n1 = atual;
    }
    return atual;
}

unsigned long long fat_rec(int n) {
    if (n <= 1) return 1;
    return n fat_rec(n - 1);
}

unsigned long long fat_iter(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}
}
