#include <stdio.h>

void conv(int horas, int mins)
{
  mins=(horas*60)+mins;
  printf("O resultado em mins e: %d",mins);
}
int main()
{
  int mins, horas;
  printf("Insira as horas: ");
  scanf("%d",&horas);
  printf("Insira os minutos: ");
  scanf("%d",&mins);
  conv(horas, mins);
}
