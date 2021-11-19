/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 22:35:13 by mlarra            #+#    #+#             */
/*   Updated: 2021/06/29 13:08:24 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	first(int x)
{
	int	k;

	ft_putchar('A');
	if (x == 2)
		ft_putchar('C');
	if (x > 2)
	{
		k = x - 2;
		while (k > 0)
		{
			ft_putchar('B');
			k--;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	middle(int x)
{
	int	k;

	ft_putchar('B');
	if (x == 2)
		ft_putchar('B');
	if (x > 2)
	{
		k = x - 2;
		while (k > 0)
		{
			ft_putchar(' ');
			k--;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if ((x == 0) || (y == 0))
		return ;
	else
	{
		first(x);
		if (y == 2)
			first(x);
		if (y > 2)
		{
			i = y - 2;
			while (i > 0)
			{
				middle(x);
				i--;
			}
			first(x);
		}
	}
}
