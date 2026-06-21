#include "fibonacci_recursivo.h"
unsigned long long int fibonacci_recursivo (int posicao)
{
	if (posicao == 0){
		return 0;
	} // Lembrando que a posição é contada a partir de 0, não de 1
	if (posicao == 1){ 
		return 1;
	}
	return fibonacci_recursivo(posicao-1) + fibonacci_recursivo(posicao-2);
	/* Não vai precisar do laço for, pois usando o 5 como exemplo, como ele não sabe o valor de 5,
	 * ele vai "guardar" e vai tentar achar o valor de 4, e depois de 3 etc até achar realmente o resultado
	 * (nesse caso, em n=1 e n=0). Como agora ele sabe o resultado,
	 * ele vai fazer o que estava guardado de trás para frente, até chegar no n = 5. */
}