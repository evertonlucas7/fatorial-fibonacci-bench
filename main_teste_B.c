#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cronometro/cronometro.h"
// #include "fatorial/iterativo/fatorial_iterativo.h"
// #include "fatorial/recursivo/fatorial_recursivo.h"
#include "fibonacci/iterativo/fibonacci_iterativo.h"
#include "fibonacci/recursivo/fibonacci_recursivo.h"

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    
    printf("Digite um número: ");
    int n;
    scanf("%d", &n);
    
    cronometro_iniciar();
    printf("Sequência de Fibonacci (iterativa) de %d: %lld\n", n, fibonacci_iterativo(n));
    double tempo_iterativo = cronometro_parar();

    cronometro_iniciar();
    printf("Sequência de Fibonacci (recursiva) de %d: %lld\n", n, fibonacci_recursivo(n));
    double tempo_recursivo = cronometro_parar();

    printf("Tempo iterativo: %lf segundos\n", tempo_iterativo);
    printf("Tempo recursivo: %lf segundos\n", tempo_recursivo);
    
    system("pause");
    
    return 0;
}
