
#include <unistd.h>

void ft_countdown(char a)
{
    a = '9';

    while (a >= '0')
    {
        write(1, &a, 1);
        a--;
    }
    write(1, "\n", 1);
}

int main()
{
    ft_countdown(9);
    return (0);
}