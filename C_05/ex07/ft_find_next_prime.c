/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:39:34 by mlarra            #+#    #+#             */
/*   Updated: 2021/06/29 22:00:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int n)
{
	int	k;

	k = 2;
	if (n >= k)
	{
		while (n % k != 0)
			k++;
		if (k == n)
			return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_find_prime(nb) != 1)
		nb++;
	return (nb);
}
