/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:20:46 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/06 19:47:04 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int(*f)(int, int))
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			j++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			k++;
		i++;
	}
	if (j == lenght - 1 || k == lenght - 1)
		return (1);
	else
		return (0);
}
