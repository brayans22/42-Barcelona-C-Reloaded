/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:47:08 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/05 17:53:10 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	actual_digit;
	char	last_digit;

	actual_digit = '0';
	last_digit = '9';
	while (actual_digit <= last_digit)
	{
		ft_putchar(actual_digit);
		actual_digit++;
	}
}
