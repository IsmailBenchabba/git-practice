#include <stdio.h>
#include <unistd.h>
int main() {
    char k = 'h';
   int *p = &k;
    printf("the pointer value is :%p\n", p);//outputs the address using the pointer variable
    printf("Inside the pointe is :%c\n", *p);//outputs inside the adress
      // the * means go the address and get the value inside it
    printf("the pointer value is :%p\n", &k);//outputs the address of the variable k
    return 0;
}