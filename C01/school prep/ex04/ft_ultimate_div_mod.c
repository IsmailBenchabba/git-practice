#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a,int *b)
{
	int div = *a / *b;
	int mod = *b % *b;
	*a = div;
	*b = mod;
}
int main(void)
{
	int a = 20;
	int b = 5;
	int *ptra = &a;
	int *ptrb = &b;
	printf("the numbers im gonna devide are :%d, %d\n",*ptra, *ptrb);
	ft_ultimate_div_mod(ptra, ptrb);
	printf("the rest is :%d \n,the remain is: %d\n",*ptra, *ptrb);

}
