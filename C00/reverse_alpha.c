#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char alphabets[]="abcdefghijklmnopqrstuvwxyz";
    int i;
    for (i = 25; i >= 0; i--)
    {
        write(1, &alphabets[i], 1);
    }
}
int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}