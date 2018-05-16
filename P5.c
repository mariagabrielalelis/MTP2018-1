
//Maria Gabriela de Oliveira Lelis 11621EBI013

#include <stdio.h>

int main()
{
char str[256];
int i = 0;
int * pi = (int *) str, a[64],b,c;

int n=0;
char bin[256];
while (n!=9){

printf("Codificacao de decodificacao de mensagem:\n\n");
printf("1: Codificar \n");
printf("2: Decodificar \n");
printf("Informe a opcao: \n\n");
scanf("%d", (&opcao));
getchar();


if (opcao == 1)
{
printf ("Informe a mensagem desejada");
for (i=0;i<255;i++)
{
str[i]=getchar();
if (str[i]==10)
break;
}
str[i]='\0';
if (i%4==0){
for (b=0;b<(i/4)-1;b++)
printf("%d, ", pi[b]);
printf ("%d" ,pi[b]);
}

else {
for (b=0;b<(i/4);b++)
prinf ("%d", pi[b]);
}
}

else if (opcao == 2)
  {
printf ("Informe o codigo desejado");
for (i=0; i<64; i++){
scanf("%d%c", &a[i],&c);
if (c!= ',')
break;
}
printf("%s", &a);
}


}
return 0;
}

