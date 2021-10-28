/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:20:24 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/06 17:09:53 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int lenght, int(*f)(char*))
{
	int	rez;
	int	i;
	int	j;

	rez = 0;
	i = 0;
	j = 0;
	while (i < lenght)
	{
		rez = (*f)(tab[i]);
		if (rez != 0)
			j++;
		i++;
	}
	return (j);
}
