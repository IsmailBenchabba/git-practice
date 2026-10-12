#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42 ;
}

int main(void)
{
	int i =12;
	int *pnt1=&i;
	int **pnt2= &pnt1;
	int ***pnt3= &pnt2;
	int ****pnt4= &pnt3;
	int *****pnt5= &pnt4;
	int ******pnt6= &pnt5;
	int *******pnt7= &pnt6;
	int ********pnt8= &pnt7;
	int *********pnt9= &pnt8;
	printf("the value of i using the pointers :%d \n", *********pnt9);

	ft_ultimate_ft(pnt9);
	printf("the value of i using the pointers :%d \n", i);
}
