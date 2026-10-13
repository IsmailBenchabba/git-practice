#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int tmp = 0;
    int i = 0;
    int counter = 0;
    while(counter <= size)
    {
        
        while(tab[i] < tab[size])
        {   
            if(tab[i] > tab[i+1])
            {
                tmp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = tmp;
            }
            i++;
        }
        i =0;
    counter++;
    }
}
	
	

int main(void)
{
    int array[5]={5,2,3,1,4};
    int *pnt = &array[0];   
    int i = 0;
    ft_sort_int_tab(pnt, 5);  

    while(i < 5)
    {
        printf("%d", array[i]);
        i++;
    }
    return(0);
}
