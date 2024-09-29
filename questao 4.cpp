/*Crie uma matriz quadrada e a inicialize de forma que seja
atribu�do o valor 2 quando os �ndices forem iguais e -3 quando
os �ndices forem diferentes. Calcule e imprima na tela apenas o
somat�rio da diagonal principal.*/

#include <stdio.h>

int main() {
    int n;

    // Entrada para o tamanho da matriz quadrada
    printf("Informe o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n];
    int somaDiagonal = 0;
    int *pontMat, *pontSomaDiagonal;

    // Aponta o ponteiro para o primeiro elemento da matriz
    pontMat = &matriz[0][0];
    
    // Aponta o ponteiro para a vari�vel somaDiagonal
    pontSomaDiagonal = &somaDiagonal;

    // Inicializa a matriz e calcula a soma da diagonal principal em um �nico loop
    for (int i = 0; i < n * n; i++) {
        // Calcula a posi��o da linha e da coluna
        int linha = i / n;
        int coluna = i % n;
        
        if (linha == coluna) {
            *(pontMat + i) = 2;  // Atribui 2 na diagonal principal
            *pontSomaDiagonal += *(pontMat + i);  // Soma o valor da diagonal principal
        } else {
            *(pontMat + i) = -3;  // Atribui -3 nos demais elementos
        }
    }

    // Impress�o da matriz (opcional)
    printf("Matriz gerada:\n");
    for (int i = 0; i < n * n; i++) {
        printf("%d ", *(pontMat + i));
        if ((i + 1) % n == 0) {
            printf("\n");  // Nova linha ap�s cada linha completa da matriz
        }
    }

    // Imprime o somat�rio da diagonal principal
    printf("Somat�rio da diagonal principal: %d\n", *pontSomaDiagonal);

    return 0;
}

