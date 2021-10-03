#include <unistd.h>
#include "ft_div_mod.c"
#include "ft_putnbr.c"

int	main()
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 14;
	b = 5;
	ft_div_mod(a, b, &c, &d);
	ft_putnbr(c);
	ft_putnbr(d);
}
