
#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'a')
        {
            write(1, "a\n", 2);
            break;
        }
        i++;
    }
    if  (str[i] != 'a')
        write(1, "\n", 1);
}

int main(int ac, char *av[])
{   
    if (ac > 1)
    {
        ft_putstr(av[1]);
    }
}