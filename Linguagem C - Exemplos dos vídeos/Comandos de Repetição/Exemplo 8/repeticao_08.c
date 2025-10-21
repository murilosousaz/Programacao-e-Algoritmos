#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    for(i = 0, j = 100; i < j; i++, j--){
        printf("\ni = %d e j = %d",i ,j);
    }
    return 0;
}