
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char 	c;
	c = '1';
	
	ft_putchar(c);
}
/*
#include <stdlib.h>
int main(int ac, char *av[])
{
    if (ac > 1)
    {
        int input = atoi(av[1]);
        char m = (char)input;
        ft_putchar(m);
    }
    return 0;
}
*/