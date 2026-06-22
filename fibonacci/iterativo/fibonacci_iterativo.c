#include "fibonacci_iterativo.h"
unsigned long long int fibonacci_iterativo(int qtd){
    unsigned long long int termo1 = 0, termo2 = 1, soma;
    int i;
	for (i=2; i<=qtd; i++)
		soma = termo1 + termo2, termo1 = termo2, termo2 = soma;
	return soma;
}