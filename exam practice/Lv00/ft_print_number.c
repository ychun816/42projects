
#include <unistd.h>

void ft_putchar(char c)
{
    c = 'a';
    while (c <= 'z')
    {
        write (1, &c, 1);
        c++;
    }
}

int main()
{
    ft_putchar('a');
}