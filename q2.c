#include <stdio.h>
#include <stdlib.h>

void troca(int* , int*);

int main()
{
    int x, y, *p;

    printf("Digite o primeiro número:\n");
    scanf("%d", &x);

    printf("Digite o segundo número:\n");
    scanf("%d", &y);

    printf("\nAntes:\nX = %d e Y = %d\n", x, y);

    troca(&x,&y);

    printf("\nDepois:\nX = %d e Y = %d\n", x, y);

    free(p);
}

void troca(int* x, int* y)
{
  int t;

  t = *x; 
  *x = *y;
  *y = t;

}