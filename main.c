#include <stdio.h>
#include <locale.h>
#include "cronometro/cronometro.h"
#include "fatorial/iterativo/fatorial_iterativo.h"
#include "fatorial/recursivo/fatorial_recursivo.h"
#include "fibonacci/iterativo/fibonacci_iterativo.h" 
#include "fibonacci/recursivo/fibonacci_recursivo.h"
#include "menu/menu.h"

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int n;
    int modulo_escolhido;
    int ordem_escolhida;
    int exibicao_escolhida;
    double tempo_iterativo;
    double tempo_recursivo;
    double tempo_total;
    unsigned long long int resultado_iterativo;
    unsigned long long int resultado_recursivo;
    
    while (1) {
        n = coletarEntrada();
    
        modulo_escolhido = escolherProblema();
        ordem_escolhida = escolherOrdem();
        
        switch (modulo_escolhido) {
        case 1:
            if (ordem_escolhida == 1){
                cronometro_iniciar();
                resultado_iterativo = fatorial_iterativo(n);
                tempo_iterativo = cronometro_parar();
                
                cronometro_iniciar();
                resultado_recursivo = fatorial_recursivo(n);
                tempo_recursivo = cronometro_parar();
                
                tempo_total = tempo_iterativo + tempo_recursivo;
            }
            if (ordem_escolhida == 2){
                cronometro_iniciar();
                resultado_recursivo = fatorial_recursivo(n);
                tempo_recursivo = cronometro_parar();
                
                cronometro_iniciar();
                resultado_iterativo = fatorial_iterativo(n);
                tempo_iterativo = cronometro_parar();
                
                tempo_total = tempo_iterativo + tempo_recursivo;
            }
            break;
        case 2:
            if (ordem_escolhida == 1){
                cronometro_iniciar();
                resultado_iterativo = fibonacci_iterativo(n);
                tempo_iterativo = cronometro_parar();
                
                cronometro_iniciar();
                resultado_recursivo = fibonacci_recursivo(n);
                tempo_recursivo = cronometro_parar();
                
                tempo_total = tempo_iterativo + tempo_recursivo;
            }
            if (ordem_escolhida == 2){
                cronometro_iniciar();
                resultado_recursivo = fibonacci_recursivo(n);
                tempo_recursivo = cronometro_parar();
                
                cronometro_iniciar();
                resultado_iterativo = fibonacci_iterativo(n);
                tempo_iterativo = cronometro_parar();
                
                tempo_total = tempo_iterativo + tempo_recursivo;
            }
            break;
        }

        exibicao_escolhida = escolherExibicao();
        switch (exibicao_escolhida) {
            case 1:
                printf("\n\033[1m * Resultado: %llu\033[0m\n", resultado_iterativo);
                printf("Tempo de execução para forma iterativa: %lf segundos.\n", tempo_iterativo);
                printf("Tempo de execução para forma recursiva: %lf segundos.\n", tempo_recursivo);
                printf("Tempo de execução total: %lf segundos.\n", tempo_total);
                break;
            case 2:
                printf("\n\033[1m * Resultado: %llu\033[0m\n", resultado_recursivo);
                switch (modulo_escolhido) {
                    case 1: /* Caso de Cálculo de Fatorial */
                        if (ordem_escolhida == 1){
                            /* Caso de iterativa primeiro e recursiva segundo */

                            printf("Código fonte do Cálculo de Fatorial de Forma Iterativa:\n");
                            printf("unsigned long long int fatorial_iterativo(int n){\n");
                            printf("	long long int fatorial = 1;\n");
                            printf("	for (int i=1; i=n; i++) \n");
                            printf("		fatorial = fatorial * i;\n");
                            printf("	return fatorial;\n");
                            printf("}\n\n");
                            
                            printf("Código fonte do Cálculo de Fatorial de Forma Recursiva:\n");
                            printf("unsigned long long int fatorial_iterativo (int n)\n");
                            printf("{\n");
                            printf("	if(n==0||n==1)\n");
                            printf("	    return 1;\n");
                            printf("	return n*fatorial_recursivo(n-1);\n");
                            printf("}\n");
                            
                            break;
                        }
                        if (ordem_escolhida == 2) {
                            /* Caso de recursiva primeiro e iterativa segunda */
                            
                            printf("Código fonte do Cálculo de Fatorial de Forma Recursiva:\n");
                            printf("unsigned long long int fatorial_iterativo (int n)\n");
                            printf("{\n");
                            printf("	if(n==0||n==1)\n");
                            printf("	    return 1;\n");
                            printf("	return n*fatorial_recursivo(n-1);\n");
                            printf("}\n\n");
                            
                            printf("Código fonte do Cálculo de Fatorial de Forma Iterativa:\n");
                            printf("unsigned long long int fatorial_iterativo(int n){\n");
                            printf("	long long int fatorial = 1;\n");
                            printf("	for (int i=1; i=n; i++) \n");
                            printf("		fatorial = fatorial * i;\n");
                            printf("	return fatorial;\n");
                            printf("}\n");
                            
                            break;
                        }
                        break;
                    case 2: /* Caso de Cálculo de Fibonacci */
                        if (ordem_escolhida == 1){
                            /* Caso de iterativa primeiro e recursiva segundo */
                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Iterativa:\n");
                            printf("unsigned long long int fibonacci_iterativo(int qtd){\n");
                            printf("	unsigned long long int termo1 = 0, termo2 = 1, soma;\n");
                            printf("	for(int i=2; i<=qtd; i++)\n");
                            printf("		soma = termo1 + termo2, termo1 = termo2, termo2 = soma;\n");
                            printf("	return soma;\n");
                            printf("}\n\n");

                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Recursiva:\n");
                            printf("unsigned long long int fibonacci_recursivo (int posicao)\n");
                            printf("{\n");
                            printf("	if (posicao == 0)\n");
                            printf("		return 0;\n");
                            printf("	if (posicao == 1)\n");
                            printf("		return 1;\n");
                            printf("	return fibonacci_recursivo(posicao-1) + fibonacci_recursivo(posicao-2);\n");
                            printf("}\n");
                            
                            break;
                        }
                        if (ordem_escolhida == 2) {
                            /* Caso de recursiva primeiro e iterativa segunda */

                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Recursiva:\n");
                            printf("unsigned long long int fibonacci_recursivo (int posicao)\n");
                            printf("{\n");
                            printf("	if (posicao == 0)\n");
                            printf("		return 0;\n");
                            printf("	if (posicao == 1)\n");
                            printf("		return 1;\n");
                            printf("	return fibonacci_recursivo(posicao-1) + fibonacci_recursivo(posicao-2);\n");
                            printf("}\n\n");
                            
                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Iterativa:\n");
                            printf("unsigned long long int fibonacci_iterativo(int qtd){\n");
                            printf("	unsigned long long int termo1 = 0, termo2 = 1, soma;\n");
                            printf("	for(int i=2; i<=qtd; i++)\n");
                            printf("		soma = termo1 + termo2, termo1 = termo2, termo2 = soma;\n");
                            printf("	return soma;\n");
                            printf("}\n");
                            
                            break;
                        }
                        break;
                }
            case 3:
                printf("\n\033[1m * Resultado: %llu\033[0m\n", resultado_iterativo);
                switch (modulo_escolhido) {
                    case 1: /* Caso de Cálculo de Fatorial */
                        if (ordem_escolhida == 1){
                            /* Caso de iterativa primeiro e recursiva segundo */

                            printf("Código fonte do Cálculo de Fatorial de Forma Iterativa:\n");
                            printf("unsigned long long int fatorial_iterativo(int n){\n");
                            printf("	long long int fatorial = 1;\n");
                            printf("	for (int i=1; i=n; i++) \n");
                            printf("		fatorial = fatorial * i;\n");
                            printf("	return fatorial;\n");
                            printf("}\n\n");
                            
                            printf("Código fonte do Cálculo de Fatorial de Forma Recursiva:\n");
                            printf("unsigned long long int fatorial_iterativo (int n)\n");
                            printf("{\n");
                            printf("	if(n==0||n==1)\n");
                            printf("	    return 1;\n");
                            printf("	return n*fatorial_recursivo(n-1);\n");
                            printf("}\n");
                            
                            break;
                        }
                        if (ordem_escolhida == 2) {
                            /* Caso de recursiva primeiro e iterativa segunda */
                            
                            printf("Código fonte do Cálculo de Fatorial de Forma Recursiva:\n");
                            printf("unsigned long long int fatorial_iterativo (int n)\n");
                            printf("{\n");
                            printf("	if(n==0||n==1)\n");
                            printf("	    return 1;\n");
                            printf("	return n*fatorial_recursivo(n-1);\n");
                            printf("}\n\n");
                            
                            printf("Código fonte do Cálculo de Fatorial de Forma Iterativa:\n");
                            printf("unsigned long long int fatorial_iterativo(int n){\n");
                            printf("	long long int fatorial = 1;\n");
                            printf("	for (int i=1; i=n; i++) \n");
                            printf("		fatorial = fatorial * i;\n");
                            printf("	return fatorial;\n");
                            printf("}\n");
                            
                            break;
                        }
                        break;
                    case 2: /* Caso de Cálculo de Fibonacci */
                        if (ordem_escolhida == 1){
                            /* Caso de iterativa primeiro e recursiva segundo */
                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Iterativa:\n");
                            printf("unsigned long long int fibonacci_iterativo(int qtd){\n");
                            printf("	unsigned long long int termo1 = 0, termo2 = 1, soma;\n");
                            printf("	for(int i=2; i<=qtd; i++)\n");
                            printf("		soma = termo1 + termo2, termo1 = termo2, termo2 = soma;\n");
                            printf("	return soma;\n");
                            printf("}\n\n");

                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Recursiva:\n");
                            printf("unsigned long long int fibonacci_recursivo (int posicao)\n");
                            printf("{\n");
                            printf("	if (posicao == 0)\n");
                            printf("		return 0;\n");
                            printf("	if (posicao == 1)\n");
                            printf("		return 1;\n");
                            printf("	return fibonacci_recursivo(posicao-1) + fibonacci_recursivo(posicao-2);\n");
                            printf("}\n");
                            
                            break;
                        }
                        if (ordem_escolhida == 2) {
                            /* Caso de recursiva primeiro e iterativa segunda */

                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Recursiva:\n");
                            printf("unsigned long long int fibonacci_recursivo (int posicao)\n");
                            printf("{\n");
                            printf("	if (posicao == 0)\n");
                            printf("		return 0;\n");
                            printf("	if (posicao == 1)\n");
                            printf("		return 1;\n");
                            printf("	return fibonacci_recursivo(posicao-1) + fibonacci_recursivo(posicao-2);\n");
                            printf("}\n\n");
                            
                            printf("Código fonte da Exibição da Sequência de Fibonacci de Forma Iterativa:\n");
                            printf("unsigned long long int fibonacci_iterativo(int qtd){\n");
                            printf("	unsigned long long int termo1 = 0, termo2 = 1, soma;\n");
                            printf("	for(int i=2; i<=qtd; i++)\n");
                            printf("		soma = termo1 + termo2, termo1 = termo2, termo2 = soma;\n");
                            printf("	return soma;\n");
                            printf("}\n");
                            break;
                        }
                        break;
                }
                printf("Tempo de execução para forma iterativa: %lf segundos.\n", tempo_iterativo);
                printf("Tempo de execução para forma recursiva: %lf segundos.\n", tempo_recursivo);
                printf("Tempo de execução total: %lf segundos.\n", tempo_total);
                break;
        }

        if (escolherNovamente() == 1)
            continue;
        break;
    }
    
    return 0;
}
