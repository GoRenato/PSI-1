#include <stdio.h>

int media(int v1, int v2, int v3, int v4)
{
  float media;
  return media=(v1+v2+v3+v4)/4;
}

int main()
{
  int v1, v2, v3, v4;
  float mediaa;
  printf("Insira 4 valores: ");
  scanf("%d%d%d%d",&v1, &v2, &v3, &v4);
  mediaa=media(v1, v2, v3, v4);
  printf("A media dos numeros e: %.2f",mediaa);
}
