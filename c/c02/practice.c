
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while (i < n && src[i]!= '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char dest[] = "bonjour";
    char src[] = "you";

    printf("dest: %s src: %s\n", dest, src);
    ft_strncpy(dest, src, 3);
    printf("%s (copied) from %s\n", dest, src);
}