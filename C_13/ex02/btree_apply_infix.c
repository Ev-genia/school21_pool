/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 22:17:31 by mlarra            #+#    #+#             */
/*   Updated: 2021/07/09 22:20:24 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		if (root->left != NULL)
			btree_apply_infix(root->left, applyf);
		(*applyf)(root->item);
		if (root->right != NULL)
			btree_apply_infix(root->right, applyf);
	}
}
