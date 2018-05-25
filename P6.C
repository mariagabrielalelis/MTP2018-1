//Maria Gabriela de Oliveira Lelis 11621EBI013


#include <stdio.h>
int main(){
   int s=10;
   int i;
   float med;
   float nume[20];
   float media(float [], int);
   do{
   printf("Digite os numeros inteiros desejados para que seja calculada a media, quando desejar parar digite o numero zero");
      for(i = 0;; i++)
      {
      printf("\n\n%d numero:", i+1);
      scanf("%f", &nume[i]);
      if(nume[i] == 0){
         goto media;
      }
   }
   media:
   med = media(nume, i);
   printf("A media dos %d numeros digitados por voce e': %f.\n", i, med);
   }while(s<11);
}
float media(float nume[], int num){
   int i;
   float soma = 0.0;
   for(i = 0; i <= num-1; i++){
      soma += nume[i];
   }
   return(soma/num);
}
