//Maria Gabriela de Oliveira Lelis
//11621EBI013

#include <stdio.h>
#include <stdlib.h>


void num(float*vetor, int tamanhovet)
{
	int i = 0;
	for(i = 0; i < tamanhovet; i++)	vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float somar(float vetor[], int n)
{
	 if (n != 0)
   {
      float soma;
      soma = somar(vetor, n - 1);
      if (vetor[n - 1] > 0) soma += vetor[n-1];
      return (soma);
   }
   else return 0;
}

float produto(float vetor[], int j)
{
	float multiplica = 1.0f;
	for(int i = 0; i < j; i++) multiplica = multiplica * vetor[i];

	return multiplica;
}

int main()
{
	srand(123456);
  float numeros[100];
	int opcao, tamanho = 100, status = 1;

  num(numeros, tamanho);

	do
  {
  	printf("\nDigite: \n1 - Somatorio.\n2 - Produto.\n3 - Sair do prgrama.");
	  printf("\nDigite a opcao: ");
	  scanf("%d", &opcao);
	  getchar();
	  switch(opcao)
    {
		  case 1:
			  printf("\nSomar: %f", somar(numeros, tamanho));
			  break;
		  case 2:
		  	printf("\nProduto: %f", produto(numeros, tamanho));
		  	break;
		  case 3:
        status = 0;
			  return 0;
		  default:
			  break;
    }
	}while(status);

	return 0;
}
