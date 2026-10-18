#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;
    if(str[0] == '\0')
    {
        return(1);
    }
    while(str[i] != '\0')
    {
        if(!(str[i] >= 32 && str[i] <= 126))
        {
            return(0);
        }
        i++;
    }
return(1);
}
	
	

int main(int argc, char **argv)
{
        if(argc == 2)
    {
        printf("output is : %d \n", ft_str_is_printable(argv[1]));
    }
    return(0);
}
