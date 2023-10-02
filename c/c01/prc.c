
void ft_swap(int *a, int *b)
{   
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void ft_sort_int_tab(int *tab, int size)
{
    int front_check;
    int back;

    front_check = 1;
    while (front_check < (size - 1))
    {
        back = front_check + 1;
        while (back < (size - 1))
        {
            if (tab[front_check] > tab[back])
                ft_swap(&tab[front_check], &tab[back]);
            back++;
        }
        front_check++;
    }
}

#include <stdio.h>
int main()
{
    int array[4] = {2, 3, 1, 0};

    printf("original: %i, %i, %i, %i\n", array[0], array[1], array[2], array[3]);
    ft_sort_int_tab(array, 4);
    printf("sort: %i, %i, %i, %i\n", array[0], array[1], array[2], array[3]);
    return 0;
}