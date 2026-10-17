#include <unistd.h>
//#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return(dest);
}
	
	

/*int main(void)
{
    char source[] = "hello";
    char destination[7];
    printf("%s\n", ft_strncpy(destination, source, 3));
    return(0);
}*/
