/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:41:10 by mlarra            #+#    #+#             */
/*   Updated: 2021/06/24 16:43:59 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8')
		write(1, "", 1);
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = '0' - 1;
		while (++b <= '9')
		{
			c = '0' - 1;
			d = b + 1;
			while (++c <= '9')
			{	
				while (d <= '9')
				{
					if ((a == c && d > b) || (a < c))
						ft_putchar(a, b, c, d);
					d++;
				}
				d = '0';
			}
		}
	}	
}
