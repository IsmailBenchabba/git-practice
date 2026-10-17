#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;


        while(str[i] != '\0')
        {   
           if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
            {
                return(0);
            }
            i++;
        }
return(1);
}


int main(void)
{
    //char string[] = "Hello";
    char string[] = "hell1o";
    //char string[] = "hel*lo";
    
    printf("this string returns : %d\n", ft_str_is_alpha(string));
    
    return(0);
}
