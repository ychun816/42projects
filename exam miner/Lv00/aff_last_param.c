#include <unistd.h>

void put_str(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char *av[])
{
    if (ac >= 2)
    {
        put_str(av[ac - 1]);
    }
    write (1, "\n", 1);
    return 0;
}