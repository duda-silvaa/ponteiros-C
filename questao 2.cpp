/*Dada uma matriz de 4x5 elementos inteiros. Fa�a um programa que:
a) a inicializa��o de todos os elementos da matriz seja com valores
informados pelo usu�rio;
b) calcule e mostre na tela a soma de cada linha;
c) calcule e mostre na tela a soma de cada coluna;
d) calcule e mostre na tela a soma de todos os seus elementos, bem
como a m�dia desses elementos;
Obs: utilize um vetor para armazenar o resultado da soma de cada
linha e outro para a soma de cada coluna.*/

#include <stdio.h>

int main() {
    int matriz[4][2];
    int soma_linha[4] = {0};  // Vetor para armazenar a soma de cada linha
    int soma_coluna[2] = {0}; // Vetor para armazenar a soma de cada coluna
    int soma_tot = 0;         // Vari�vel para armazenar a soma total
    float media;

    int *pontMat = &matriz[0][0];  // Ponteiro para a matriz
    int *pontSL = soma_linha;  // Ponteiro para a soma das linhas
    int *pontSC = soma_coluna; // Ponteiro para a soma das colunas
    int *pontST = &soma_tot;       // Ponteiro para a soma total

    // Entrada de dados e c�lculo das somas com um �nico la�o
    printf("Informe os 8 elementos da matriz: \n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", pontMat + i); // Usando ponteiro para entrada

        int linha = i / 2; // Calcula a linha correspondente
        int coluna = i % 2; // Calcula a coluna correspondente

        *(pontSL + linha) += *(pontMat + i);  // Soma da linha
        *(pontSC + coluna) += *(pontMat + i); // Soma da coluna
        *pontST += *(pontMat + i);            // Soma total
    }

    // Calcula a m�dia
    media = *pontST / 8.0;

    // Exibe a soma de cada linha
    printf("\nSoma de cada linha:\n");
    for (int i = 0; i < 4; i++) {
        printf("Linha %d: %d\n", i + 1, *(pontSL + i));
    }

    // Exibe a soma de cada coluna
    printf("\nSoma de cada coluna:\n");
    for (int j = 0; j < 2; j++) {
        printf("Coluna %d: %d\n", j + 1, *(pontSC + j));
    }

    // Exibe a soma total e a m�dia dos elementos
    printf("\nSoma total dos elementos: %d\n", *pontST);
    printf("M�dia dos elementos: %.2f\n", media);

    return 0;
}

