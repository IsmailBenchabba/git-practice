#include <unistd.h>
//#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
        if(str[0] == '\0')
         {
            return(1);
          }    

    int i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return(0);
        }
        i++;
    }
return(1);
}
	
	

/*int main(int argc, char **argv)
{
        if(argc == 2)
    {
        printf("output is : %d \n", ft_str_is_lowercase(argv[1]));
    }
    return(0);
}*/
