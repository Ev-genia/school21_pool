#include "ft_swap.c"
#include "ft_putnbr.c"

int	main()
{
	int	a;
	int	b;

	a = 1;
	b = 5;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
}
