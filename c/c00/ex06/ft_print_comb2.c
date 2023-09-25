#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_loop()
{
    int left;
    int right;

    left = 0;
    while (left < 100)
    {
        right = left + 1;
        while (right < 100)
        {
            ft_putchar((left / 10) + 48);
            ft_putchar((left % 10) + 48);
            write (1, " ", 1);
            ft_putchar((right / 10) + 48);
            ft_putchar((right % 10) + 48);
            if (!(left == 98 && right == 99))
                write (1, ", ", 2);
            right++;
            }
        left++;
        }
}

void    ft_print_comb2(void)
{
    ft_loop();
}

int main()
{
    ft_print_comb2();
    return 0;
}