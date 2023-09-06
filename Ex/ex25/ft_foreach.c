/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:16:53 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 18:43:54 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f (tab[i]);
}
/*
#include<stdio.h>
void print_pair(int n)
{
    if ( n % 2 == 0 )
        printf("%i\n", n);
}
int main()
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ft_foreach(tab, 11, &print_pair);
    return 0;
}
*/
