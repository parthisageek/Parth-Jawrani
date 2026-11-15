#include <stdio.h>
#include <string.h>

int main(){
    char ch = 'A';
    printf("isalpha : %d\n", isalpha(ch));
    printf("isdigit : %d\n", isdigit(ch));
    printf("isalum : %d\n", isalum(ch));
    printf("islower : %d\n", islower(ch));
    printf("isupper : %d\n", isupper(ch));
    printf("islower : %c\n", islower(ch));
    printf("isupper : %c\n", isupper(ch));
    return 0;
}