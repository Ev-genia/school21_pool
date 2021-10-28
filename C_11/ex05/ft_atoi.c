/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:20:27 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/06 21:35:41 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_mn(char *str)
{
	int	i;
	int	b;
	int	br;

	br = 1;
	b = 1;
	i = 0;
	while (str[i] != '\0' && br)
	{
		if (str[i] == '-')
		{
			b *= -1;
		}			
		if (str[i] >= '0' && str[i] <= '9')
			br = 0;
		i++;
	}	
	return (b);
}		

int	ft_atoi(char *str)
{
	int	i;
	int	b;
	int	result;
	int	br;

	i = 0;
	b = is_mn(str);
	result = 0;
	br = 1;
	while (str[i] != '\0' && br)
	{	
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			if (str[i + 1] < '0' || str[i + 1] > '9')
				br = 0;
		}
		i++;
	}
	return (result * b);
}				
