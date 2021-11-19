#include "ft_btree.h"
#include <stdio.h>

t_btree    *btree_create_node(void *item);

int	main(void)
{
	void	*a;
    t_btree *rez;
	int	b;
	int	*c;

	b = 43;
	a = &b;

    rez = btree_create_node(a);
	c = rez->item;
	printf("42: %d\n", *c);
}
