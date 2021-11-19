/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:00:53 by mlarra            #+#    #+#             */
/*   Updated: 2021/06/27 11:01:06 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	first(int x)
{
	int	k;

	ft_putchar('/');
	if (x == 2)
		ft_putchar('\\');
	if (x > 2)
	{
		k = x - 2;
		while (k > 0)
		{
			ft_putchar('*');
			k--;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middle(int x)
{
	int	k;

	ft_putchar('*');
	if (x == 2)
		ft_putchar('*');
	if (x > 2)
	{
		k = x - 2;
		while (k > 0)
		{
			ft_putchar(' ');
			k--;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	last(int x)
{
	int	k;

	ft_putchar('\\');
	if (x == 2)
		ft_putchar('/');
	if (x > 2)
	{
		k = x - 2;
		while (k > 0)
		{
			ft_putchar('*');
			k--;
		}
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if ((x == 0) || (y == 0))
		ft_putchar('\n');
	else
	{
		first(x);
		if (y == 2)
			last(x);
		if (y > 2)
		{
			i = y - 2;
			while (i > 0)
			{
				middle(x);
				i--;
			}
			last(x);
		}
	}
}
