#include <stdio.h>

int intervalo(int x, int lim_inf, int lim_sup)
{
  if(x>=lim_inf && x<=lim_sup) printf("O x esta no intervalo\n");
  else printf("O x nao esta no intervalo\n");
}

int main()
{
  int x, lim_inf=0, lim_sup=100;
  printf("Insira o valor de x: ");
  scanf("%s",&x);
  intervalo(x, lim_inf, lim_sup);
}
