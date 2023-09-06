/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:14:01 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/04 17:07:24 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	wrapper_sqrt(int nb, int odd_nb, int sqrt_nb)
{
	if (nb > odd_nb)
		return (wrapper_sqrt(nb - odd_nb, odd_nb + 2, sqrt_nb + 1));
	else if (nb == odd_nb)
		return (sqrt_nb + 1);
	return (0);
}

int	ft_sqrt(int nb)
{
	return (wrapper_sqrt(nb, 1, 0));
}
/*
#include<stdio.h>
int main()
{
    int i = ft_sqrt(-1);
    int j = ft_sqrt(0);
    int k = ft_sqrt(2);
    int l = ft_sqrt(4);
    int m = ft_sqrt(6);
    int n = ft_sqrt(8);
    int o = ft_sqrt(12);
    int p = ft_sqrt(36);
    int q = ft_sqrt(49);
    int r = ft_sqrt(56);
    int s = ft_sqrt(64);
    int t = ft_sqrt(81);
    int u = ft_sqrt(121);
    
    printf("%i %i %i %i %i %i %i %i %i %i %i %i %i", 
	i, j, k, l, m, n, o, p, q, r, s, t, u);
    
    return (0);
}
*/
