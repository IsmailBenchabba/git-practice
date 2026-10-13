#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int tmp;
    i=0, tmp =0;
    
    while(i < size / 2)
    {
        tmp = tab[i];
        tab[i] = tab[size -1];
        tab[size -1] = tmp ;
        i++;
        size--;
    }
   
}
	
	

int main(void)
{
    int i = 0;
    int nbr[5] ={1,2,3,4,5};
    int *pnt = &nbr[0];

    ft_rev_int_tab(pnt, 5);

    while(i < 5)
    {
        printf("%d,", nbr[i]);
        i++;
    }   
    return(0);
}
