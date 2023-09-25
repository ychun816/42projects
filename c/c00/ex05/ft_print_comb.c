#include <unistd.h>

void    ft_putchar(char c)
{
    
    write(1, &c, 1);
}

void    ft_loop(int a, int b, int c)
{
    a = 0;
    while (a <= 7)
    {
        while (b <= 8)
        {
            while (c <= 9)
            {
                ft_putchar(a + 48);
                ft_putchar(b + 48);
                ft_putchar(c + 48);
                if (!(a == 7 && b == 8 && c == 9))
                    write(1, ", ", 2);
                // if (a <= 7 || b <= 8 || c <= 9) useless
                //     break;
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a + 1; 
        c = b + 1;
    }
}

void    ft_print_comb(void)
{
   int  i;
   int  j;
   int  k;

   i = 0;
   j = 1;
   k = 2;
   ft_loop(i, j, k);
}

int main(void)
{
    ft_print_comb();
}
/* ALTERNATIVE

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    int left;
    int mid;
    int right;

    left = 0;
    while (left <= 7)
    {
        mid = left + 1;
        while (mid <= 8)
        {
            right = mid + 1;
            while (right <= 9)
            {
                ft_putchar(left + 48);
                ft_putchar(mid + 48);
                ft_putchar(right + 48);
                if (!(left == 7 && mid == 8 && right == 9))
                    write(1, ", ", 2);
                    right++;
            }
            mid++;
        }
        left++;
    }
}

int main()
{
    ft_print_comb();
    return 0;
}   
*/