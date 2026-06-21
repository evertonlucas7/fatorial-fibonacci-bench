#include "fibonacci_iterativo.h"
unsigned long long int fibonacci_iterativo(int qtd){
	int termo1, termo2;
	long long int soma = 0;
	termo1 = 0, termo2 = 1; // 2 primeiros termos da sequência
	for (int i=1; i<=qtd; i++)
		soma = termo1 + termo2, termo1 = termo2, termo2 = soma;
	return soma;
}