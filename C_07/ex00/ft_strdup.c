/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:23:27 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/02 20:28:06 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;
	int		j;

	tab = (char*)malloc(sizeof(*src + 1));
	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		tab[j] = src[i];
		i++;
		j++;
	}
	return (tab);
}