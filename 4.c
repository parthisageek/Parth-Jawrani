#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello123";
    char *ptr = strpbrk(str, "0123456789");
    if(ptr)printf("First digit: %c\n", *ptr);
    else printf("Not found\n");
    return 0;
}