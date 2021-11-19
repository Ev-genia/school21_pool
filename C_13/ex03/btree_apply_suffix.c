/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 22:34:33 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/09 22:38:52 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		if (root->left != NULL)
			btree_apply_suffix(root->left, applyf);
		if (root->right != NULL)
			btree_apply_suffix(root->right, applyf);
		(*applyf)(root->item);
	}
}	
