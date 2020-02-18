#include <stdio.h>

int conv(int graus)
{
  return (graus*1.8)+32;
}

int main()
{
  int grausc, grausf;
  printf("Insira os graus em celsius: ");
  scanf("%d",&grausc);
  grausf=conv(grausc);
  printf("Os graus em fahreneit sao: %d",grausf);
}
