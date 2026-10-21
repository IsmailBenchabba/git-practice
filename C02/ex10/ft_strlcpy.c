#include <unistd.h>
//#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    unsigned int count = 0;
    if(n != 0)
    {
        while(src[i] != '\0' && i < n -1)
        {
         dest[i] = src[i];
           i++;   
        }
        dest[i] ='\0';
    }
    while(src[count] != '\0')
    {
        count ++;
    }
return(count);
    
}


/*int main(void)
{
    char string[] = "as";
    char destination[2];
    printf("%d\n", ft_strlcpy(destination, string, 2));
    printf("%s", destination);
    return(0);
}*/
