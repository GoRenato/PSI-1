#include <stdio.h>

int maior(int x, int y, int z)
{
  if (x>y && x>z)
  {
  return x;
  }
    else if (y>x && y>z)
    {
      return y;
    }
      else if (z>y && z>x)
      {
        return z;
      }
}

void main()
{
  int val1, val2, val3, maiorval;
  printf("Insira o primeiro valor: ");
  scanf("%d",&val1);
  printf("Insira o segundo valor: ");
  scanf("%d",&val2);
  printf("Insira o terceiro valor: ");
  scanf("%d",&val3);
  maiorval=maior(val1,val2,val3);
  printf("O maior valor e: %d\n", maiorval);
}
