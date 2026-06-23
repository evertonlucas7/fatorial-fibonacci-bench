#include <stdio.h>
#include "menu.h"

int coletarEntrada() {
    int valor;
    while (1) {
        printf("Digite o valor a ser calculado: ");
        scanf("%d", &valor);
        if (valor < 0) {
            printf("[Erro] Digite um numero inteiro.\n");
            continue;
        }
        return valor;
    }    
}

int escolherProblema() {
    int problema_escolhido;

    while (1) {
        printf("\n\033[1m * Escolha o problema clássico a ser abordado:\033[0m\n");
        printf("1.  Cálculo de Fatorial;\n");
        printf("2.  Exibição da Sequência de Fibonacci.\n");
        printf("Opção: ");
        scanf("%d", &problema_escolhido);

        if (problema_escolhido >= 1 && problema_escolhido <= 2) return problema_escolhido;
        printf("[Erro] Opção inválida.\n");
    }
}

int escolherOrdem() {
    int ordem_escolhida;

    while (1) {
        printf("\n\n\033[1m * Escolha a ordem das fórmulas de cálculo para solução: \033[0m\n");
        printf("1.  1º usando laço de repetição tradicional, 2º usando recursividade;\n");
        printf("2.  1º usando recursividade, 2º usando laço de repetição tradicional.\n");
        printf("Opção: ");
        scanf("%d", &ordem_escolhida);

        if (ordem_escolhida >= 1 && ordem_escolhida <= 2)
            return ordem_escolhida;

        printf("\033[1m[Erro]\033[0m Opção inválida.\n");
    }
}

int escolherExibicao()
{
    int exibicao_escolhida;
    while (1) {
        printf("\n\033[1m * Escolha o que será exibido para solução: \033[0m\n");
        printf("1.  Mostrar somente tempo de execução;\n");
        printf("2.  Mostrar somente o código fonte implementado para cada forma de cálculo, com indentação e comentários;\n");
        printf("3.  Mostrar ambos: o código fonte implementado, e o tempo de execução para cada forma de cálculo.\n");
        printf("Opção: ");
        scanf("%d", &exibicao_escolhida);

        if (exibicao_escolhida >= 1 && exibicao_escolhida <= 3)
            return exibicao_escolhida;

        printf("\033[1m[Erro]\033[0m Opção inválida.\n");
    }
}

int escolherNovamente()
{
    int escolha;
    while (1) {
        printf("\n\033[1m * Deseja realizar rodar novamente? \033[0m\n");
        printf("1.  Sim;\n");
        printf("2.  Não.\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        if (escolha >= 1 && escolha <= 2)
            return escolha;

        printf("\033[1m[Erro]\033[0m Opção inválida.\n");
    }
}

void printFatorialIterativo()
{
    printf("Código fonte do Cálculo de Fatorial de Forma Iterativa:\n");
    printf("unsigned long long int fatorial_iterativo(int n){\n");
    printf("	long long int fatorial = 1;\n");
    printf("	for (int i=1; i=n; i++) \n");
    printf("		fatorial = fatorial * i;\n");
    printf("	return fatorial;\n");
    printf("}\n\n");
}

void printFatorialRecursivo()
{
    printf("Código fonte do Cálculo de Fatorial de Forma Recursiva:\n");
    printf("unsigned long long int fatorial_iterativo (int n)\n");
    printf("{\n");
    printf("	if(n==0||n==1)\n");
    printf("	    return 1;\n");
    printf("	return n*fatorial_recursivo(n-1);\n");
    printf("}\n");
}

void printFibonacciIterativo()
{
    printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Iterativa:\n");
    printf("unsigned long long int fibonacci_iterativo(int qtd){\n");
    printf("	unsigned long long int termo1 = 0, termo2 = 1, soma;\n");
    printf("    if (qtd == 0) return 0;\n");
    printf("    if (qtd == 1) return 1;\n");
    printf("	for(int i=2; i<=qtd; i++)\n");
    printf("		soma = termo1 + termo2, termo1 = termo2, termo2 = soma;\n");
    printf("	return soma;\n");
    printf("}\n\n");
}

void printFibonacciRecursivo()
{
    printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Recursiva:\n");
    printf("unsigned long long int fibonacci_recursivo (int posicao)\n");
    printf("{\n");
    printf("	if (posicao == 0)\n");
    printf("		return 0;\n");
    printf("	if (posicao == 1)\n");
    printf("		return 1;\n");
    printf("	return fibonacci_recursivo(posicao-1) + fibonacci_recursivo(posicao-2);\n");
    printf("}\n");
}