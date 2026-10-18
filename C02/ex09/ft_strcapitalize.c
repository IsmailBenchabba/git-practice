#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] -32;
            i++;
        }
        else
        {
          i++;
        }
    }

return(str);
}
int main(void)
{
    char string[] = "hello ,55world?";
    printf("%s", ft_strcapitalize(string));
    return(0);
}
