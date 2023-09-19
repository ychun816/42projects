
void    ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void ft_sort_int_tab(int *tab, int size)
{
    int first;
    int next;

    first = 0;
    while (first < size - 1)
    {
        next = first + 1; 
        if (tab[first] > tab[next])
        {
            ft_swap(&tab[first], &tab[next]);
            first++;
        }
        else if (tab[first] <= tab[next])
            first++;
    }
}

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void    ft_putstr(char *str)
{
    write(1, str, 1);
}
int	main(int ac, char **av)
{
	int	length;

	length = 1;
	while (length < ac)
	{
		int context = atoi(av[length]);
        ft_sort_int_tab(&context, ac - 1);
        ft_putstr(av[length]);
		length++;
	}
}