#include<stdio.h>
unsigned long long int bin_dec(char bin[]){
int i=0;
unsigned long long int dec = 0;
while (bin[i] != '\0'){
dec=dec*2+(bin[i] - '0');
i++;
}
return dec;
}
void dec_bin (unsigned int bits, int nb) {
if (nb != 0 ){
dec_bin(bits/2, nb-1);
}
printf ("%d", (bits%2));

}

int main() {
int opcao;
int n=0, nb, bits;
int bd= bin_dec;
int valor;
int db= dec_bin;
char bin[256];
while (n!=9){

printf("Conversor de base numerica:\n\n");
printf("1: Binario para Decimal \n");
printf("2: Binario para Hexadecimal \n");
printf("3: Hexadecimal para Decimal \n");
printf("4: Hexadecimal para Binario \n");
printf("5: Decimal para Binario \n");
printf("6: Decimal para Hexadecimal \n");
printf("7: Octal para Decimal \n");
printf("8: Decimal para Octal \n");
printf("Informe a opcao: \n\n");
scanf("%d", (&opcao));
getchar();

if (opcao == 1)
{
printf ("Informe o numero binario desejado");
scanf ("%s", (&bd));
printf ("%s em decimal e': %d");

}
  else if (opcao == 2)
  {
  printf ("Informe o numero binario desejado");
  scanf ("%s", (&bd));
  printf ("%d em hexadecimal e': %x");
  }
  else if (opcao == 3)
  {
   printf ("Informe o numero hexadecimal desejado");
   scanf("%x, &valor);
   printf ("%x em hexadecimal e': %d");
   }
   else if (opcao == 4)
   {
   printf ("Informe o numero hexadecimal desejado");
   scanf ("%s", (&db));
  printf ("%x em binario e': %s");
  }
  else if (opcao == 5)
  {
  printf ("Informe o numero decimal desejado");
  scanf ("%s", (&db));
  printf ("%d em binario e': %s");
  }
   else if (opcao == 6){
   printf ("Informe o numero decimal desejado");
   scanf("%d, &valor");
   printf ("%d em hexadecimal e': %x");
   }
   else if (opcao == 7){
   printf ("Informe o numero octal desejado");
   scanf("%o, &valor");
   printf ("%o em decimal e': %d");
   }

   else if (opcao == 8){
   printf ("Informe o numero decimal desejado");
   scanf("%d, &valor");
   printf ("%o em decimal e': %d");
   }

}
return 0;
}
