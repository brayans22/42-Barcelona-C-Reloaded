/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:25:24 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 18:20:57 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "hola";
	char s2[] = "hola";
	printf("result: %i\n", ft_strcmp(s1, s2));
	return (0);
}
*/