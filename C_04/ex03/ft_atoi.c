/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:30:25 by mlarra            #+#    #+#             */
/*   Updated: 2021/06/28 21:21:34 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbr(char *dest, int j, int i)
{
	int		k;
	int		nb;

	k = 1;
	nb = 0;
	while (j-- > 0)
	{
		nb = nb + (dest[j] - '0') * k;
		k = k * 10;
	}
	if ((i % 2) != 0)
		nb = -nb;
	return (nb);
}

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	char	dest[200];

	while ((*str == '\t') || (*str == '\n') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r') || (*str == ' '))
		str++;
	i = 0;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			i++;
		str++;
	}
	j = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
		dest[j] = *str;
		str++;
		j++;
	}
	if (j == 0)
		return (0);
	return (ft_nbr(dest, j, i));
}
