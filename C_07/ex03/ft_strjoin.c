/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 23:37:49 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/02 23:38:19 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_ft(int size, char **dest, char *sep, char **strs)
{
	int	k;
	int	i;

	i = -1;
	k = size - 1;
	while (++i <= (size - 1))
	{
		*dest = ft_strcat(*dest, strs[i]);
		if (k >= 1)
		{
			*dest = ft_strcat(*dest, sep);
			k--;
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		len;

	if (size == 0)
	{
		dest = malloc(sizeof(char) * (size + 1));
		dest[0] = '\0';
		return (dest);
	}
	len = 0;
	i = -1;
	while (i++ < size - 1)
		len = len + (ft_strlen(strs[i]));
	len = len + (size - 1) * ft_strlen(sep);
	dest = malloc(sizeof(char) * (len + 1));
	dest[0] = '\0';
	ft_ft(size, &dest, sep, strs);
	return (dest);
}
