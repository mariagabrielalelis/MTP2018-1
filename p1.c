//Maria Gabriela de OLiveira Lelis 11621EBI013


#include <stdio.h>
int main() {

  int estado = 0;
  int numero = 0;
  int i = 0;
  char binario[256];
  printf ("Insira o número binário desejado:");
  scanf("%s", binario);
  while(binario[i] != ’\0’){
  if (binario[i] == '1') {
      numero = numero * 2 + 1;
      ++i;
    }
    else {
      numero = numero * 2;
      ++i;
    }
  }
  if (numero % 3 == 0 )
    printf ("e' divisivel por 3");
  else
   printf ("nao e' divisivel por 3");
return 0;
}
