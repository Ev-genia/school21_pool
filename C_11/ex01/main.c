#include <unistd.h>
#include <stdio.h>
int	*ft_map(int *tab, int lenght, int(*f)(int));

int	ft_nbr(int nb)
{
	return (nb);
}

int	main(void)
{
	int	tab[3] ={0, 1, 2} ;
	int	i;
	int *dest;
	int	len;

	i = 0;
	len = 0;
	dest = ft_map(tab, len, &ft_nbr);
	while (i < len)
	{
		printf("%d ", dest[i]);
		i++;
	}
}
