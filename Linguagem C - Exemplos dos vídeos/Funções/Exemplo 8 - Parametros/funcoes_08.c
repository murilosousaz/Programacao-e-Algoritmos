#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x, y;
};

void atribui(struct ponto *p){
    (*p).x = 10;
    (*p).y = 20;
}

int main(){
    struct ponto p1;

    atribui(&p1);
    printf("%d %d", p1.x, p1.y);

    return 0;
}