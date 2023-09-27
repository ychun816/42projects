


void ft_rev_int_tab(int *tab, int size)
{
    int left;
    int right;
    int swap;

    left = 0;
    right = size - 1;
    while (left < right)
    {   
        swap = tab[left];
        tab[left] = tab[right];
        tab[right] = swap;
        left++;
        right--;
    }
}
#include <stdio.h>
// int main()
// {
//     int array[5] = {1, 2, 3, 4, 5};
//     int i;
//     int size;

//     i = 0;
//     size = 5;
//     ft_rev_int_tab(array, size);
//     while (i < size)
//     {
//         printf("rev: %i\n", array[i]);
//         i++;
//     }
//     return 0;
// }
#include <stdlib.h>
int main(int ac, char *av[])
{
    int size;
    int i;
    int test[i] = &av[1];

    size = atoi(av[2]);
    while (ac == 3)
    {
        ft_rev_int_tab(test, size);
        printf("rev: %i", test[i]);
        i++;
    }
}