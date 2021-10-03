#include <stdio.h>
#include "ft_strcmp.c"

int	main ()
{
	char	a[1024] = "12345";
	char	b[1024] = "12305";

	printf("%d",ft_strcmp(a, b));
}
