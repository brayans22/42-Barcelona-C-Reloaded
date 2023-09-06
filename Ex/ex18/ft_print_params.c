/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:19:50 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/04 17:20:27 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	j;
	char			c;

	i = 1;
	j = 0;
	c = '0';
	while (i < (unsigned int)argc)
	{
		while (argv[i][j])
		{
			c = argv[i][j];
			ft_putchar(c);
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
