#include <stdio.h>

int vddfalso(int x)
{
  if (x%2==0)
  {
    printf("O x e par\n");
  }
    else
    {
      printf("O x e impar\n");
    }
}
int main()
{
  int x;
  printf("Insira o valor de x: ");
  scanf("%d",&x);
  vddfalso(x);
}
