#include <stdio.h>
#include <unistd.h>


int main() {
    char string[]= "hello";
    char *p = &string;
    printf("the pointer of the string is :%p\n", &string);
    printf("the pointer of the string is :%p\n", &string[0]);
    printf("%s\n", string);
    char string2[] = "world";
    *p = string2;
    printf("the pointer of the string is :%s\n", string);
    return 0;
}
