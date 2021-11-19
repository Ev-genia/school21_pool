#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	int		c;

	if (root == 0)
		return (0);
	c = (*cmpf)(root->item, data_ref);
	if (c == 0)
		return (root->item);
	if (c < 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	return (btree_search_item(root->right, data_ref, cmpf));
}
