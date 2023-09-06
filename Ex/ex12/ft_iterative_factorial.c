/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:04:22 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 17:51:08 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb > 1)
	{
		while (nb > 1)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
    int i = ft_iterative_factorial(0);
    int j = ft_iterative_factorial(-1);
    int k = ft_iterative_factorial(2);
    int l = ft_iterative_factorial(3);
    int m = ft_iterative_factorial(4);
    int n = ft_iterative_factorial(5);
    int o = ft_iterative_factorial(6);
    int p = ft_iterative_factorial(7);
    int q = ft_iterative_factorial(8);
    int r = ft_iterative_factorial(9);
    
    printf("%i %i %i %i %i %i %i %i %i %i", i, j, k, l, m, n, o, p, q, r);
    
    return 0;
}
*/
