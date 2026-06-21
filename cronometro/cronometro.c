#include <time.h>
#include "cronometro.h"

// Variável para armazenar o tempo assim que cronometro_iniciar() for chamado
static struct timespec tempo_inicial;

void cronometro_iniciar(void)
{
    timespec_get(&tempo_inicial, TIME_UTC);
}

double cronometro_parar(void)
{
    struct timespec tempo_final;
    timespec_get(&tempo_final, TIME_UTC);
    return (double) (tempo_final.tv_sec - tempo_inicial.tv_sec) + (double) (tempo_final.tv_nsec - tempo_inicial.tv_nsec) / 1e9;
}