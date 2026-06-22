#include <time.h>
#include "cronometro.h"

// Variável para armazenar o tempo assim que cronometro_iniciar() for chamado
static clock_t tempo_inicial;

void cronometro_iniciar(void)
{
    tempo_inicial = clock();
}

double cronometro_parar(void)
{
    clock_t tempo_final = clock();
    return (double) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
}