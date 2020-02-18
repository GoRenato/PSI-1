#include <stdio.h>

int tabuada(int val)
{
  int i=1;
  while (i<=10)
  {
    printf("%d * %d = %d\n",val ,i ,val*i);
    i=i+1;
  }
}
int main()
{
  int val;
  printf("Introduza qual a tabuada pretende fazer: ");
  scanf("%d",&val);
  tabuada(val);
}
