#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

static int coletarEntrada(int limiteMax) {
    int valor;
    while (1) {
        printf("Defina o valor de N (0 a %d): ", limiteMax);
        if (scanf("%d", &valor) != 1) {
            printf("[Erro] Digite um numero inteiro.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
        if (valor >= 0 && valor <= limiteMax) return valor;
        printf("[Erro] Valor fora dos limites permitidos.\n");
    }
}

int main(void) {
    int modulo, metodo, n;
    unsigned long long resultado;

    do {
        modulo = exibirMenuPrincipal();
        if (modulo == 3) break;

        if (modulo == 1) {
            metodo = exibirSubMenu("MODULO FIBONACCI");
            if (metodo == 3) continue;
            
            n = coletarEntrada(40); // Teto para evitar travamento na recursao
            resultado = (metodo == 1) ? fibonacciRecursivo(n) : fibonacciIterativo(n);
            printf("Resultado Fibonacci: %llu\n", resultado);
            
        } else if (modulo == 2) {
            metodo = exibirSubMenu("MODULO FATORIAL");
            if (metodo == 3) continue;
            
            n = coletarEntrada(20); // Teto para evitar overflow aritmético
            resultado = (metodo == 1) ? fatorialRecursivo(n) : fatorialIterativo(n);
            printf("Resultado Fatorial: %llu\n", resultado);
        }

        // Loop de Nova Rodada
        printf("\nPressione [ENTER] para nova rodada...");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        getchar();

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

    } while (modulo != 3);

    return 0;
}