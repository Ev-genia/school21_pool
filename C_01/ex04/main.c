#include "ft_ultimate_div_mod.c"
#include "ft_putnbr.c"
#include <unistd.h>

int	main()
{
	int	a;
	int	b;

	a = 14;
	b = 5;
	ft_putnbr(a);
	write(1, "\n", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	write(1, "\n", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
}
