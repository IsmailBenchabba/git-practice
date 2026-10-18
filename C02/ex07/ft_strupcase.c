#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        str[i] = str[i]-32;
        i++;
    }

return(str);
}
int main(void)
{
    char string[] = "hello";
    printf("%s", ft_strupcase(string));
    return(0);
}
