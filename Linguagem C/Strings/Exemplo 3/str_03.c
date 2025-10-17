#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

int main(){
    char str[10];
    
    setbuf(stdin, NULL);
    
    gets(str);

    return 0;
}