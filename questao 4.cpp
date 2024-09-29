/*Crie uma matriz quadrada e a inicialize de forma que seja
atribuído o valor 2 quando os índices forem iguais e -3 quando
os índices forem diferentes. Calcule e imprima na tela apenas o
somatório da diagonal principal.*/

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
    
    // Aponta o ponteiro para a variável somaDiagonal
    pontSomaDiagonal = &somaDiagonal;

    // Inicializa a matriz e calcula a soma da diagonal principal em um único loop
    for (int i = 0; i < n * n; i++) {
        // Calcula a posição da linha e da coluna
        int linha = i / n;
        int coluna = i % n;
        
        if (linha == coluna) {
            *(pontMat + i) = 2;  // Atribui 2 na diagonal principal
            *pontSomaDiagonal += *(pontMat + i);  // Soma o valor da diagonal principal
        } else {
            *(pontMat + i) = -3;  // Atribui -3 nos demais elementos
        }
    }

    // Impressão da matriz (opcional)
    printf("Matriz gerada:\n");
    for (int i = 0; i < n * n; i++) {
        printf("%d ", *(pontMat + i));
        if ((i + 1) % n == 0) {
            printf("\n");  // Nova linha após cada linha completa da matriz
        }
    }

    // Imprime o somatório da diagonal principal
    printf("Somatório da diagonal principal: %d\n", *pontSomaDiagonal);

    return 0;
}

