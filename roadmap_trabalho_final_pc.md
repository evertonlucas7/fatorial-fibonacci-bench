# Roadmap - Trabalho Final de Programação Computacional (Tema 16)

## Objetivo Geral
Desenvolver, em C (ANSI - C89/C90), um programa que compare o tempo de execução de algoritmos iterativos e recursivos para resolver dois problemas clássicos (Fatorial e Fibonacci), com menus interativos que permitam ao usuário escolher o problema, a ordem de execução dos algoritmos e o tipo de saída (tempo, código-fonte, ou ambos).

## Goals (Metas Específicas)
1. Implementar corretamente as 4 funções principais: fatorial iterativo, fatorial recursivo, Fibonacci iterativo e Fibonacci recursivo.
2. Cronometrar com precisão o tempo de execução de cada algoritmo (usando `time.h`, função `clock()`).
3. Construir um sistema de menus claro, validado e que permita múltiplas rodadas.
4. Exibir o código-fonte de cada função quando solicitado, com indentação e comentários explicativos.
5. Organizar o projeto em módulos (.h e .c separados) para facilitar a divisão do trabalho entre os 3 integrantes.
6. Versionar o projeto no GitHub com commits organizados e um README explicativo.
7. Testar valores críticos de entrada (que tornem o tempo perceptível, principalmente na recursão de Fibonacci).

---

## Estrutura de Arquivos Proposta (Bibliotecas Locais)

```
trabalho-final-pc/
├── main.c              # Programa principal, controla o fluxo dos menus
├── menu.h / menu.c     # Funções de exibição e leitura dos menus
├── fatorial.h / fatorial.c   # Implementações iterativa e recursiva do fatorial
├── fibonacci.h / fibonacci.c # Implementações iterativa e recursiva do fibonacci
├── cronometro.h / cronometro.c # Funções para medir tempo de execução
├── exibicodigo.h / exibicodigo.c # Funções que imprimem o código-fonte como texto
└── README.md
```

### Conteúdo resumido de cada módulo

- **fatorial.h/.c**
  - `long long fatorial_iterativo(int n)`
  - `long long fatorial_recursivo(int n)`

- **fibonacci.h/.c**
  - `long long fibonacci_iterativo(int n)`
  - `long long fibonacci_recursivo(int n)`

- **cronometro.h/.c**
  - `double medir_tempo(funcao, parametro)` (ou medição manual com `clock()` antes/depois da chamada)

- **menu.h/.c**
  - `int menu_problema(void)`
  - `int menu_ordem(void)`
  - `int menu_exibicao(void)`
  - `int perguntar_novo_round(void)`

- **exibicodigo.h/.c**
  - Strings contendo o código-fonte comentado de cada função, para impressão quando o usuário escolher a opção 6 ou 7

---

## Divisão de Tarefas entre os 3 Integrantes

### Integrante A - Algoritmos Numéricos
- Implementar `fatorial.h/.c` (iterativo e recursivo)
- Implementar `fibonacci.h/.c` (iterativo e recursivo)
- Definir e documentar os "intervalos de valores críticos de entrada" (ex.: Fibonacci recursivo começa a demorar perceptivelmente a partir de n ≈ 35-40)

### Integrante B - Cronometragem e Exibição de Código
- Implementar `cronometro.h/.c`
- Implementar `exibicodigo.h/.c` (strings com código comentado e indentado)
- Garantir que a saída de tempo esteja formatada de forma legível (ex.: segundos com várias casas decimais)

### Integrante C - Menus e Integração (main.c)
- Implementar `menu.h/.c` com validação de entradas
- Implementar `main.c`, integrando todos os módulos
- Implementar o loop de "nova rodada"
- Testes finais e ajustes de integração

> Observação: todos devem revisar e testar o código dos colegas antes da integração final.

---

## Cronograma Sugerido (exemplo de 4 semanas)

| Semana | Atividades |
|---|---|
| 1 | Configurar repositório GitHub, estrutura de pastas, definir protótipos das funções (.h), cada integrante cria sua branch |
| 2 | Cada integrante implementa seu módulo isoladamente, com testes próprios via main de teste |
| 3 | Integração dos módulos em `main.c`, implementação dos menus completos, testes integrados |
| 4 | Testes de valores críticos, ajustes de tempo de execução, escrita do README, revisão final e entrega |

---

## Boas Práticas de Organização no GitHub

1. Criar repositório com `README.md`, `.gitignore` (ignorar binários gerados, ex.: `*.o`, `*.exe`, `a.out`)
2. Usar branches por integrante (ex.: `feature/fatorial`, `feature/fibonacci`, `feature/menus`) e depois mergear na `main` via Pull Request
3. Fazer commits pequenos e descritivos (ex.: "Implementa fatorial recursivo e iterativo")
4. Adicionar no README: como compilar (ex.: `gcc -ansi -pedantic main.c fatorial.c fibonacci.c menu.c cronometro.c exibicodigo.c -o programa`), como executar, e descrição da divisão de tarefas

---

## Checklist Final antes da Entrega

- [ ] Compila sem erros/warnings com `-ansi -pedantic` (padrão C89/C90)
- [ ] Menu 1: escolha entre Fatorial e Fibonacci, com solicitação de valor de entrada e aviso sobre valores críticos
- [ ] Menu 2: escolha da ordem (iterativo antes, ou recursivo antes)
- [ ] Menu 3: escolha do tipo de saída (tempo, código, ou ambos)
- [ ] Exibição correta do tempo de execução de cada abordagem
- [ ] Exibição correta do código-fonte comentado e indentado
- [ ] Opção de repetir o processo (nova rodada) ao final
- [ ] Testes com valores pequenos e valores críticos (grandes)
- [ ] README completo no repositório GitHub
