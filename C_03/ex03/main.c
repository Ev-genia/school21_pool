#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int	main ()
{
	char	a[50] = "12345";
	char	b[50] = "_abcd";
	int		nb;

	nb = 3;
	ft_strncat(a, b, nb);
	printf("%s", a);
	printf("%c", '\0');
}
