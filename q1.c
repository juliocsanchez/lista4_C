#include <stdio.h>
#include <stdlib.h>

void soma(int *,int *,int **);

int main(){
    int x,y,*px,*py,*p = NULL;

    printf("Digite o primeiro número:\n");
    scanf("%d",&x);

    px = &x;

    printf("Digite o segundo número:\n");
    scanf("%d",&y);

    py = &y;

    soma(px,py,&p);

    printf("\n[%p] = %d\n",p,*p);

    free(p);

}


void soma(int* x,int* y,int **z){
    *z = malloc(sizeof(int));
    **z = *x + *y;
}