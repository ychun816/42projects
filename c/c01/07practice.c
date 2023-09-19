
void ft_rev_int_tab(int *tab, int size)
{
    int front;
    int back;
    int swap;

    front = 0;
    back = size - 1; 
    while (front < (size / 2))
    {
            swap = tab[front];
            tab[front] = tab[back];
            tab[back] = swap;
            front++;
            back--;
    }
}

// ======TO BE FIXED+++++
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// void ft_putstr(char *str)  
// {
//     write(1, str, 1);
// }
// int main(int ac, char *av[])
// {
//     int length;
//     int context;

//     length = 0;
//     while (length < ac)
//     {
//         context = atoi(av[length]);
//         ft_rev_int_tab(&context, ac - 1);
//         ft_putstr(av[length]);
//         length++;
//     }
// } ======TO BE FIXED+++++
#include <stdio.h> 
int	main()
{
	int	tab[5] = {0,1,2,3,4};
	int	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}