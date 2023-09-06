/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:35:33 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 16:40:30 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **argv, int i, int j)
{
	char	*tmp;

	tmp = argv[i];
	argv[i] = argv[j];
	argv[j] = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(unsigned int argc, char **argv)
{
	unsigned int	i;
	unsigned int	j;
	char			c;

	i = 1;
	j = 0;
	c = '0';
	while (i < argc)
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
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		j = 1;
		while (i < argc)
		{
			while (j < argc - i)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
					ft_swap(argv, j, j + 1);
				j++;
			}
			j = 1;
			i++;
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
