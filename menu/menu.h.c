#ifndef MENU_H
#define MENU_H

typedef unsigned long long SuperInt;

int exibirMenuPrincipal(void);
int exibirSubMenu(const char *titulo);

// Funcoes de calculo (Fibonacci)
SuperInt fibo_rec(int n);
SuperInt fibo_iter(int n);

// Funcoes de calculo (Fatorial)
SuperInt fat_rec(int n);
SuperInt fat_iter(int n);

#endif
