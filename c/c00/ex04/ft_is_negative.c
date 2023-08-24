#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

int main()
{
    ft_is_negative(-3);
}
// int main(argc, *argv[])
// {
//     if (argc = 1)
//     {
//         write(1, &argv[], 1);
//     }
// }