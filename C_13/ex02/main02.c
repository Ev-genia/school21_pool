#include "ft_btree.h"
#include <stdio.h>

void    btree_apply_infix(t_btree *root, void (*applyf)(void *));
t_btree    *btree_create_node(void *item);

void    applyf(void *a)
{
    printf("%d\n", *((int*)a));
}

int	main(void)
{
    t_btree *root;
    int j;
    int i;
    int k;
    int x;
    j = 21;
    i = 15;
    k = 10;
    x = 5;
    root = btree_create_node(&j);
    root->left = btree_create_node(&i);
    root->left->left = btree_create_node(&k);
    root->left->right = btree_create_node(&x);
    btree_apply_infix(root, &applyf);
}
