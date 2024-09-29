#include <stdio.h>

int main (){
	int mat[3][4];
	int par = 0, impar = 0; 
	int soma_par=0, soma_impar = 0;
	int *pontP, *pontI, *pontMat, *pontSP, *pontSI;
	
	pontP = &par;
	pontI = &impar;
	pontMat = &mat[0][0];
	pontSP = &soma_par;
	pontSI = &soma_impar;
	
	printf("informe os 12 elementos da matriz:  ");
	for (int i = 0; i < 12; i++){
		scanf("%d", pontMat +i);
	
	if(*(pontMat + i) % 2 == 0){
		(*pontP)++;
		*pontSP += *(pontMat + i);
	} else {
		(*pontI)++;
		*pontSI += *(pontMat + i);
	}
}
	
	printf("pares %d\n", *pontP);
	printf("soma dos pares %d\n", *pontSP );
	printf("impares %d\n", *pontI);
	printf("soma dos impares %d\n", *pontSI );
}
