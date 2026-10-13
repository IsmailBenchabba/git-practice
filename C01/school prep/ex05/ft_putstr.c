#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
	printf("\n");
}
	
	

int main(void)
{
	char string[] = "hello";
	//char *strln = &string[0];
	ft_putstr(string);
        
	
}
