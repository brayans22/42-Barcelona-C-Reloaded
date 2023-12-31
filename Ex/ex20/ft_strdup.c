/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:59:02 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/04 16:34:05 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = (char *)malloc(sizeof(ft_strlen(src) + 1));
	if (!aux)
		return (0);
	while (src[i])
	{
		aux[i] = src[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{   
    char src[] =  "hola      wwwww";
    printf("%s\n", ft_strdup(src) );
    char srci[] = "Hola      wwwww";
    printf("%s\n", strdup(srci) );
    return (0);
}
*/
