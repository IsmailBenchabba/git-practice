#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	char word = *str;
	printf("%s\n", word);
	/*while(word != 0)
	{
		write(1,&word,1);
		word++;
	}*/
	//char mot = *word
	/*printf("the string is :%s\n", word);
	printf("the string is :%p\n", word);*/
	
	printf("\n");
}
	
	

int main(void)
{
	char *string = "hello";
	//printf("the string is :%s\n", string);
	//char *ptr = &string;
	//printf("the string is :%p\n", &string);
	ft_putstr(*string);
        
	
}
