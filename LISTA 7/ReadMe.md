# Lista 7 - Algoritmos e Programação Estruturada

Este repositório contém a resolução de uma série de exercícios propostos na Lista 7 da disciplina de Algoritmos e Programação Estruturada.

## Exercícios

Cada exercício foi resolvido em um arquivo `.c` separado. A seguir estão as descrições dos exercícios:

### 1. Manipulação de Ponteiros

Escreva um programa que:
- Declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
- Associe as variáveis aos ponteiros (use o operador `&`).
- Modifique os valores de cada variável usando os ponteiros.
- Imprima os valores das variáveis antes e após a modificação.

### 2. Comparação de Endereços de Variáveis

Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

### 3. Troca de Valores com Ponteiros

Faça um programa que leia 2 valores inteiros e chame uma função que receba essas 2 variáveis e troque o seu conteúdo. Ou seja, a função deverá trocar os valores de A e B, por exemplo. Exiba os valores modificados na função `main`.

### 4. Endereços de Elementos de um Array

Crie um programa que contenha um array de `float` com 10 elementos. Imprima o endereço de cada posição desse array.

### 5. Endereços de Elementos de uma Matriz

Crie um programa que contenha uma matriz de `float` com 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.

### 6. Verificação de Substring

Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Utilize aritmética de ponteiros para acessar os caracteres das strings. **Não** utilize funções da biblioteca `string.h`.

### 7. Parte Inteira e Fracionária de um Número

Escreva uma função que, dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária desse número. O programa deverá chamar essa função e exibir os resultados.

Protótipo da função:

```c
void frac(float num, int* inteiro, float* frac);
