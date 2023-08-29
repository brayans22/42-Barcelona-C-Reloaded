/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:52:17 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/25 22:09:13 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	const char *s;

	s = str;
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
/*
int	main()
{
	char v [] = "hola como estas";
	ft_putstr(v);
	return 0;
}
*/
