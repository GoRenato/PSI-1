#include <stdio.h>

void calculadora(int v1, int v2)
{
  int soma, sub, mult, div;
  soma=v1+v2;
  sub=v1-v2;
  mult=v1*v2;
  div=v1/v2;
  printf("\n A soma e: %d\n A subtracao e: %d\n A multiplicacao e: %d\n A divisao e: %d\n",soma, sub, mult, div);
}
int main()
{
  int v1,v2;
  printf("Insira o primeiro e o segundo valor: ");
  scanf("%d%d",&v1, &v2);
  calculadora(v1,v2);
}
