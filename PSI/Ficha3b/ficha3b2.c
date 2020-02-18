#include <stdio.h>

void conv(int mins)
{
  int horas;
  horas=mins/60;
  mins=mins%60;
  printf("O numero de horas e minutos e : %d:%d",horas,mins);
}
void main()
{
  int mins;
  printf("Insira os minutos: ");
  scanf("%d",&mins);
  conv(mins);
}
