//Maria Gabriela de OLiveira Lelis 11621EBI013


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
unsigned long long int operacaoNot(char bin[]){ //funçao not
int i;
for(i = 0x0; i <= 0x1; i++)
{
printf("%X | %X\n", i & 0x1, (~i) & 0x1 );
}
}
unsigned long long int operacaoAnd (char bin[]){ // função and
int i, a, b;
printf("A | B | AND\n");
for(i = 0x00; i <= 0x03; i++) {
a = i & 0x1;
b = (i & 0x2) >> 1;
2;
printf("%X | %X | %X\n", b & 0x1, a & 0x1, a&b & 0x1);
}
}

unsigned long long int operacaoOr (char bin[]) { //funcao or
int i, a, b;
printf("A | B | OR\n");
for(i = 0x00; i <= 0x03; i++) {
a = i & 0x1;
b = (i & 0x2) >> 1;
printf("%X | %X | %X\n", b & 0x1, a & 0x1, a|b & 0x1);
}
}

unsigned long long int operacaoXor (char bin []) { //funcao xor

int i, a, b;
printf("A | B | XOR\n");
for(i = 0x00; i <= 0x03; i++) {
a = i & 0x1;
b = (i & 0x2) >> 1;
printf("%X | %X | %X\n", b & 0x1, a & 0x1, a^b & 0x1 );
}
}


unsigned long long int operacaoRight (char bin []){ //função right
int n, dado;
printf("RIGHT SHIFT\n");
dado = 0x8000;
n = 5;
printf("%04X | >> %d bits | %04X\n", dado, n, dado>>n );
printf("%04d | >> %d bits | %04d\n", dado, n, dado>>n );
}

unsigned long long int operacaoLeft (char bin []) { //função left

int n, dado;
printf("LEFT SHIFT\n");
dado = 0x0001;
n = 5;
printf("%04X | << %d bits | %04X\n", dado, n, dado<<n );
printf("%04d | << %d bits | %04d\n", dado, n, dado<<n );

}

typedef union {
unsigned char numero;
char inteiro;
}cmp2;
cmp2 numero;
cmp2 inteiro;
unsigned int aux;
int numero.inteiro;
if(numero.inteiro < 0) {
aux = -numero.inteiro;
}

int main() {
int opcao;
int n=0, nb, bits;
int argumento1;
int valor;
int numero_inteiro;
if (numero_inteiro<0){
printf("Logo, na memoria, %d vira:\t%X\n", numero.inteiro, numero.bin);
}
int db= dec_bin;

char bin[256];

while (n!=9){

printf("Selecione a operacao atraves do menu:\n\n");
printf("1:NOT \n");
printf("2:AND \n");
printf("3: OR \n");
printf("4: XOR \n");
printf("5: Right Shift \n");
printf("6: Left Shift \n");
printf("Informe a opcao: \n\n");
scanf("%d", (&opcao));
getchar();

if (opcao == 1)
{
scanf ("argumento1, argumento2",(&operacaoNot));
printf ("argumento1 [int] (argumento1 [bin]");
printf ("operacao argumento2 [int] (argumento2 [bin]) : resultado [int] (resultado [bin]");
}

else if (opcao == 2)
{
scanf ("argumento1,argumento2",(&operacaoAnd));
printf ("argumento1 [int] (argumento1 [bin]");
printf ("operacao argumento2 [int] (argumento2 [bin]) : resultado [int] (resultado[bin]");
}

else if (opcao == 3)
{
scanf ("argumento1,argumento2",(&operacaoOr));
printf ("argumento1 [int] (argumento1 [bin]");
printf ("operacao argumento2 [int] (argumento2 [bin]) : resultado [int] (resultado[bin]");
}
else if (opcao == 4)
{
scanf ("argumento1,argumento2" ,(&operacaoXor));
printf ("argumento1 [int] (argumento1 [bin]");
printf ("operacao argumento2 [int] (argumento2 [bin]) : resultado [int] (resultado[bin]");
}
else if (opcao == 5)
{
scanf ("argumento1,argumento2" , (&operacaoRight));
printf ("argumento1 [int] (argumento1 [bin]");
printf ("operacao argumento2 [int] (argumento2 [bin]) : resultado [int] (resultado[bin]");
}
else if (opcao == 6)
{
scanf ("argumento1,argumento2" , (&operacaoLeft));
printf ("argumento1 [int] (argumento1 [bin]");
printf ("operacao argumento2 [int] (argumento2 [bin]) : resultado [int] (resultado[bin]");
}

return 0;
}
