#include <unistd.h>
#include <stdio.h>
int	ft_is_sort(int *tab, int lenght, int(*f)(int,int));

int	ft_nbr(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
        return (1);
    return (0);
}

int	main(void)
{
	int	tab[5] = {8, 6, 5, 2, 1};

	printf("%d ", ft_is_sort(tab, 5, &ft_nbr));
}
