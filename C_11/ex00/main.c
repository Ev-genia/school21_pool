#include <unistd.h>

void	ft_foreach(int *tab, int lenght, void(*f)(int));

void	ft_putnbr(int nb);

int	main(void)
{
	int	tab[3] ={0, 1, 2} ;

	ft_foreach(tab, 2, &ft_putnbr);
}
