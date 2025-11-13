#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x, y;
};

int main(){
    struct ponto q;
    struct ponto *p;

    p = &q;

    (*p).x = 10;
    p -> y = 20;

    printf("p = %d\n", p);
    printf("x = %d\n", (*p).x);
    printf("y = %d\n", (*p).y);
    printf("q = %d\n", q);
    printf("q.x = %d\n", q.y);
    printf("q.x = %d\n", q.x);
    
    return 0;
}