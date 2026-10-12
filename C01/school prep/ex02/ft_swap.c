#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int i=6;
	int j=5;
	printf("i = %d, j = %d \n",i,j);
	ft_swap(&i, &j);
	printf("i = %d, j = %d \n",i,j);

	return (0);
}
