/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:15:10 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/04 16:58:47 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	const char	*s;

	s = str;
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char v [] = "hola como estas";
	ft_putstr(v);
	return 0;
}
*/
