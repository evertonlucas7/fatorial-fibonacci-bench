#include "fatorial_iterativo.h"
unsigned long long int fatorial_iterativo(int n){
	long long int fatorial = 1;
	for (int i=1; i<=n; i++)
		fatorial = fatorial * i; 
	return fatorial;
}