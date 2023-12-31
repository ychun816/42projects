#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');     
        nb = nb * -1;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}  
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char *av[])
{
    if (ac > 0)
    {
        ft_putnbr(atoi(av[1]));
        ft_putchar('\n');
        return 0;
    }
}
/*ALTERNATIVE

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
   if (nb < 0)
   {
    nb = nb * -1; //nb = -nb;
    ft_putchar ('-');
   }
   if (nb < 10)
        ft_putchar(nb + 48);
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

#include <stdlib.h>
int main(int ac, char *av[])
{
    if (ac == 2)
        ft_putnbr(atoi(av[1]));
    return 0;
===========
int main()
{
    ft_putnbr(-30);
    return 0;
}
*/