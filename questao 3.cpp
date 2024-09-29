/*Fa�a um programa que leia uma matriz A que armazene
valores inteiros quaisquer informados pelo usu�rio. O
algoritmo dever� procurar na matriz se existe um determinado
valor que est� sendo buscado pelo usu�rio. Caso exista, exibir
uma mensagem avisando que encontrou e em qual posi��o da
matriz. Caso n�o, exibir uma mensagem de que n�o foi
encontrado.*/

#include <stdio.h>
int main() {
    int matriz[4][4]; // Matriz 4x4 como exemplo
    int valorBuscado;
    int *pontMat = &matriz[0][0]; // Ponteiro para a matriz
    int encontrado = 0; // Vari�vel para indicar se o valor foi encontrado

    // Entrada de dados da matriz
    printf("Informe os 16 elementos da matriz (4x4):\n");
    for (int i = 0; i < 16; i++) {
        scanf("%d", pontMat + i); // Usando ponteiro para entrada
    }

    // Pergunta ao usu�rio o valor a ser buscado
    printf("Informe o valor a ser buscado: ");
    scanf("%d", &valorBuscado);

    // Busca pelo valor na matriz
    for (int i = 0; i < 16; i++) {
        if (*(pontMat + i) == valorBuscado) {
            printf("Valor %d encontrado na posi��o [%d][%d] da matriz.\n", valorBuscado, i / 4, i % 4);
            encontrado = 1;
            break; // Encerra a busca assim que encontra o valor
        }
    }

    // Caso o valor n�o seja encontrado
    if (!encontrado) {
        printf("Valor %d n�o encontrado na matriz.\n", valorBuscado);
    }

    return 0;
}

