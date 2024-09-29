#include <stdio.h>

int main(){
	int a = 5;
	int *p1= &a, **p2 = &p1;
	
	printf("&a = %p, a = %d\n", &a, a);
	printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
	printf("&p2 = %p, p2 = %p, **p2 = %d\n", &p2, p2, **p2);
	
	**p2 = 100;
	
	printf("&a = %p, a = %d\n", &a, a);
	printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
	printf("&p2 = %p, p2 = %p, **p2 = %d\n", &p2, p2, **p2);
	
}

	/* exemplos para trabalhar os conceitos:  
	vamos considerar que:
	- o &a (end de memória de a é 5000);
	- o &p1 é 5004;
	- o &p2 é 5012;
 
	int a = 5;
	int *p1= &a, **p2 = &p1;
	Resultado:
	
	a = 5;
	*p1 = 5;
	**p2 = 5;
	
	ou seja, p1 aponta para a (guardando o end 5000 e consequentemente recebendo como conteúdo 5)
	p2 é um ponteiro de ponteiro, ou seja, ele aponta para o ponteiro p1, que p1 recebe 5000,
	p2 vai receber o conteúdo que p1 ta apontando, que é 5; **p2= 5;

	*&a = 5;
	*p1 = 5;
	**&p1 = 5;
	*/
