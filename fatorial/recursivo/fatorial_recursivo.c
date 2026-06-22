#include "fatorial_recursivo.h"
unsigned long long int fatorial_recursivo (int n)
{
	if (n==0||n==1)
		return 1;
	/* Se n=0 ou n=1, resultado do fatorial é sempre 1 */
	return n*fatorial_recursivo(n-1); 
	/*
	 * Não vai precisar do laço for, pois usando o 5 como exemplo, como ele não sabe o valor de 5, 
	 * ele vai "guardar" e vai tentar achar o valor de 4, e depois de 3 etc até achar realmente o resultado (nesse caso, em n=1). 
	 * Como agora ele sabe o resultado, ele vai fazer o que estava guardado de trás para frente, até chegar no n = 5.
	 */
}