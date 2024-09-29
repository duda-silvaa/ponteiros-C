/*Faça um programa que leia duas matrizes A e B, contendo cada um
10 elementos numéricos quaisquer. Crie uma nova matriz, também
de 10 elementos, onde cada elemento corresponde a soma dos
elementos de A e B. Escreva na tela os elementos do novo conjunto,
obtido.*/

#include <stdio.h>

int main(){
	int matA[2][5], matB[2][5], matC[2][5];
	int *pontA, *pontB, *pontC;
	
	pontA = &matA[0][0];	
	pontB = &matB[0][0];	
	pontC = &matC[0][0];
	
	printf("Informe os 10 elementos da matriz A:");
	for(int i = 0; i < 10; i++)	{
		scanf("%d", pontA+i);
	}
	
	printf("Informe os 10 elementos da matriz B:");
	for(int i = 0; i < 10; i++)	{
		scanf("%d", pontB+i);
	}
	
	for(int i = 0; i < 10; i++)	{
		*(pontC + i )= *(pontA +i) + *(pontB +i);
	}

	 printf("Matriz C:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(pontC + i));
    }
}
