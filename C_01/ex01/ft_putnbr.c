/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:13:01 by mlarra            #+#    #+#             */
/*   Updated: 2021/06/24 20:12:29 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr(int nb)
{
	nb = nb + '0';
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb <= 9)
		ft_print_nbr(nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
