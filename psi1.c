#include <stdio.h>
void soma(int v1, int v2)
{
        printf("%d+%d=%d", v1,v2,v1+v2);
}
void main()
{
	int x,y;
	printf("Introduza dois valores: ");
	scanf("%d,%d", &x, &y);
	soma(x, y);
}


