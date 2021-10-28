#include "ft_list.h"
#include <stdio.h>

int	main(void)
{
	void	*a;
    t_list *rez;
	int	b;
	int	*c;

	b = 43;
	a = &b;

    rez = ft_create_elem(a);
	c = rez->data;
	printf("42: %d\n", *c);
}
