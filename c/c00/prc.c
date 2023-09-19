
#include <unistd.h>

void ft_is_neg(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else if (n > 0)
        write(1, "P", 1);
}


#include <stdlib.h>
int main(int ac, char *av[])
{
    if (ac == 2) //if(ac > 1)
    {
        ft_is_neg(atoi(av[1]));
    }
}
// int main()
// {
//     ft_is_neg(3);
//     return 0;
// }