#include <stdio.h>

int vogal(char letra)
{
  if (letra!='a' && letra!='e' && letra!='i' && letra!='o' && letra!='u' && letra!='A' && letra!='E' && letra!='I' && letra!='O' && letra!='U')
  {
    printf("A sua letra nao e uma vogal\n");
  }
    else
    {
      printf("A sua letra e uma vogal\n");
    }
}

int main()
{
  char letra;
  printf("Insira a sua letra: ");
  scanf("%c",&letra);
  vogal(letra);
}
