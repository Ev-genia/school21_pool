/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:01:37 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/06 12:50:26 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int(*f)(int))
{
	int	*dest;
	int	i;

	dest = malloc(sizeof(int) * lenght);
	if (dest == 0)
		return (dest);
	i = 0;
	while (i < lenght)
	{
		dest[i] = (*f)(tab[i]);
		i++;
	}
	return (dest);
}
