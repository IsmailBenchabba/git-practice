#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0 ;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
     dest[i] = '\0';
    return(dest);
}
	
	

int main(void)
{
    char source[] = "hello";
    char destination[50];
    char *pnt1 = source ;
    char *pnt2 = destination ;
    printf("%s\n",ft_strcpy(pnt2, pnt1));
    printf("\n%s", destination);
    
    
    return(0);
}
