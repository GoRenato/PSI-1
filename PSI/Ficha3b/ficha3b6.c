#include <stdio.h>

int conv(int val)
{
  if(val%2!=0)
  {
    return 0;
  }
    else
    {
      return 1;
    }
}
int main()
{
  int val, convv;
  printf("Insira o seu valor: ");
  scanf("%d",&val);
  convv=conv(val);
  if (convv==0)
  {
    printf("O numero e impar");
  }
    else
    {
      printf("O numero e par");
    }
}
