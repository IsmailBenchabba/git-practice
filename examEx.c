#include <stdio.h>
#include <unistd.h>

void get_stg(int argc, char *strl)
{
    if (argc ==1) 
    {
        int i = 0;
        while (strl[i] != '\0') 
        {
        if (strl[i] == 'W') 
        {
            printf("Found the character 'W' at index %d\n", i);
            return;
        }
        i++;
    }
    printf("Character 'W' not found in the string.\n");
    return;

    }
    printf("Invalid number of arguments. Please provide a string.\n");
    
}

int main (void) {
    char str[] = "Hello!";
    char *ptr = &str[0];
    get_stg(2,ptr);
    return 0;
}