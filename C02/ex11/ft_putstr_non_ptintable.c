#include <unistd.h>
//#include <stdio.h>

void    ft_putstr_non_printable(char *str)
{
    int i = 0;
    unsigned char c;
    char hex[] = "0123456789abcdef";
    while(str[i] != '\0')
    {
        if(str[i] >= 32 && str[i] <=126)
        {
            write(1,&str[i],1);
            i++;
        }
        else
        {
            c = str[i];
            write(1,"\\",1);
            write(1,&hex[c / 16],1);
            write(1,&hex[c % 16],1);
            i++;
        }
    }
}
	
/*int main(int argc, char **argv)
{
    if(argc == 2)
    {
    ft_putstr_non_printable(argv[1]);
    }

    return(0);
}*/
