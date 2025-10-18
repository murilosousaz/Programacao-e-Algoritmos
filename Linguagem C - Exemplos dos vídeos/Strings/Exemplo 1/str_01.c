#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'h';

    char fonte[4];
    fonte[0] = 'L';
    fonte[1] = 'U';
    fonte[2] = 'Z';
    fonte[3] = '\0';

    int a = 19;

    printf("%c\n", c);
    printf("%s\n", fonte); // print the string
    printf("%d\n", a);

    return 0;
}
