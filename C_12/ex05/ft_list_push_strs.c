/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:48:29 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/08 17:27:54 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin;
	t_list	*new;
	int		i;

	if (size <= 0)
		return (NULL);
	begin = ft_create_elem(strs[0]);
	i = 1;
	while (i < size)
	{
		new = ft_create_elem(strs[i]);
		new->next = begin;
		begin = new;
		i++;
	}
	return (begin);
}
