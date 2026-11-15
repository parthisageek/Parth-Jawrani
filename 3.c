#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "12345abc";
    printf("Length = %zu\n", strspn(str, "0123456789"));

    return 0;
}