/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:45:40 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/05 17:54:00 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	actual_letter;
	char	last_letter;

	actual_letter = 'a';
	last_letter = 'z';
	while (actual_letter <= last_letter)
	{
		ft_putchar(actual_letter);
		actual_letter++;
	}
}
