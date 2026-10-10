
#include <unistd.h>

void	ft_print_numbers(void)

{
	char	c;

	c = '0';
	while (c < '9')
	{
		write (1, &c, 1);
		c++;
	}
}
/*void	ft_print_numbers(void)
{
	int	numbers [10]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int	i;

	char c;

	i = 0;
	while (i<10)
    {
	c= numbers[i]+'0'; 
        write(1, &c, 1);
        i++;
    }
}*/
/*int main(void)
{
    ft_print_numbers();
    return (0);
}*/