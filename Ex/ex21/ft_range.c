/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:02:51 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/04 15:07:20 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	range = (int *) malloc(sizeof(int) * (max - min));
	if (!(range) || (min >= max))
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i++] = min;
		min++;
	}
	return (range);
}
/*
I) CASO NO HAY MEMORIA MALLOC
    RETURN (0)
II) MIN >= MAX
    RETURN (0);
III) CUALQUIER OTRA COSA ES VALIDA (MIN < MAX)
    EJEMPLO:
        {11 - 22}
        MIN   MAX
        RANGO DE VALORES POSIBLES {11 - 21}
        22 - 11 = 11 (numeros dentro del rango de valores posibles)

#include <stdio.h>
int main()
{
    int *r = ft_range(11, 22);
    int i = 0;
    while (i++ < 11)
        printf("%i, ", r[i - 1]);
}
*/
