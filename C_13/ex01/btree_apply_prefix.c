/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 09:19:45 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/09 21:48:54 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		(*applyf)(root->item);
		if (root->left != NULL)
			btree_apply_prefix(root->left, applyf);
		if (root->right != NULL)
			btree_apply_prefix(root->right, applyf);
	}
}
