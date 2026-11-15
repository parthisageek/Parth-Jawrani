#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "ABCDE";
    memmove(str+1, str, 4);
    printf("%s\n", str);
    return 0;
}