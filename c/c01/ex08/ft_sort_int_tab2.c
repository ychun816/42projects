/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylin <ylin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:38:02 by ylin              #+#    #+#             */
/*   Updated: 2023/07/18 10:13:58 by ylin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}


void ft_sort_int_tab(int *tab, int size)
{
    int front;
    int nxt;

    front = 0;
    nxt = front + 1;
    while (front <= size - 2)
    {
        while (front <= size - 2)
        {
            if (tab[front] > tab[nxt])
            {
                ft_swap(&tab[front], &tab[nxt]);
                front ++;
            }
            else if (tab[front] <= tab[nxt])
                front++;
            nxt = front + 1;
        }
        size --;
        front = 0;
        nxt = front + 1;
    }
}
/*
#include <stdio.h>
int main()
{
    int test[4] = { 9, 1, 0, 8};
    
    printf("original: %i, %i, %i, %i\n", test[0], test[1], test[2], test[3]);    
    ft_sort_int_tab(test, 4);
    printf("sorted: %i, %i, %i, %i\n", test[0], test[1], test[2], test[3]);
}
==========AC/AV============
#include <stdlib.h>
int main(int ac, char *av[])
{
    int nb1;
    int nb2;
    int nb3;
    int nb4;

    nb1 = atoi(av[1]);
    nb2 = atoi(av[2]);
    nb3 = atoi(av[3]);
    nb4 = atoi(av[4]); 

    int test[4] = {nb1, nb2, nb3, nb4};
    if (ac != 5)
    {
        printf("required format: %s [number1][number2][number3]\n", av[0]);
        return 1;
    } 

    printf("original: %i, %i, %i, %i\n",test[0], test[1], test[2], test[3]);    
    ft_sort_int_tab(test, 4);
    printf("sorted: %i, %i, %i, %i\n", test[0], test[1], test[2], test[3]); 
    return 0;
}
*/