#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a,int b,int *div,int *mod)
{
	*div = a/b;
	*mod = a%b;
}
int main(void)
{
	int a,b;
	a=7;
	b=2;
	int x,z;
	int *pntx = &x;
	int *pntz = &z;
	printf("the number i will devide %d ,%d\n", a, b);
	ft_div_mod(a, b, pntx, pntz);
	printf ("the result is %d \n the remain is %d\n", *pntx, *pntz);
}
