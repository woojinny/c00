#include <stdio.h>

void ft_print_combn(int i)
{
    int com[10];
    int k;

    for (int i = 1; i < 10; i++)
    {
        if(i == 1)
        {
            com[0] = 0;
            com[1] = k;
            for(k = 1; k < 10; k++)
            printf("%d%d", com[0], com[1]);
            
        }
        // else
        // for(int k = 0; n < i; n++)
        // {
        //     com[k] < com[k+1];

        // }
    }
}

int main(void)
{
    ft_print_combn(1);
    return 0;
}