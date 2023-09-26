
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}
#include <stdio.h>
// int main()
// {
//     char *test;
//     int count;

//     test = "happy";
//     count = ft_strlen(test);
//     printf("%i", count);
// }
int main(int ac, char *av[])
{
    int result;

    if (ac > 0)
    {
        result = ft_strlen(av[1]);
        printf("word length: %i", result);
    }
}