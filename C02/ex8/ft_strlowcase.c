#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        str[i] = str[i]+32;
        i++;
    }

return(str);
}
int main(void)
{
    char string[] = "FGSDFHSDFH";
    printf("%s", ft_strlowcase(string));
    return(0);
}
