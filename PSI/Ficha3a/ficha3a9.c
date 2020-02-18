#include <stdio.h>

int cubo(int val)
{
  return val*val*val;
}
int main()
{
  int num, val_cubo,valor;
  printf("Insira o valor: ");
  scanf("%d", &valor);
  val_cubo=cubo(valor);
  printf("O cubo de %d e %d\n",valor, val_cubo);
}
