/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:54:22 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/08 11:53:18 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*temp;

	temp = *begin_list;
	new = ft_create_elem(data);
	if (*begin_list)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
		*begin_list = new;
}
