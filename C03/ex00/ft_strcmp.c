#include <unistd.h>
#include <stdio.h>

int     ft_strcmp(char *s1,char *s2)
{
    int     i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else if(s1[i] != s2[i])
                {
                    return((unsigned char)s1[i] - (unsigned char)s2[i]);
                }
    }
return(0);
}

int main(void)
{
    char str1[]= "helosg";
    char str2[]= "helfrs";
    printf("the output is : %d", ft_strcmp(str1, str2));
    return(0);
}
