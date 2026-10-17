#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	printf("the length of the string is %d", i);
	return(i);
}

int main(void)
{
	char *string = "hello";
	ft_strlen(string);
	return(0);
}
