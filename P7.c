// Maria Gabriela de Oliveira Lelis 11621EBI013

#include <stdio.h>

typedef unsigned long int natural;
natural ack(int x, int y)
{
if (x == 0)
{
return y+1;
}
else if (y == 0)
{
return ack(x - 1, 1);
}
else
{
natural resp = ack(x, y - 1);
return ack(x - 1, resp);
	}
}

int main(){
	unsigned long int valor;
	int i, j;
	printf("Digite o valor de m e n ");
	scanf("%d %d", &i, &j);
	valor = ack(i, j);
	printf("Adotando a funcao de Ackermann, temos: (%d, %d) = %lu\n", i, j, valor);

	return 0;
	}
