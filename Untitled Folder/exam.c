#include <unistd.h>

void ft_n(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'n')
         {
            write(1,"n\n",3);
            return;
         }
        i++;
    }
        write(1,"n\n",3);
        return;
}
	
	

int main(int argc, char **argv)
{
    if(argc == 2)
    {
     ft_n(argv[1]);   
    }
    else 
    write(1,"n\n",3);
    return(0);
}
