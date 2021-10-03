#include <stdio.h>
#include "ft_strncmp.c"

int	main ()
{
	char	a[1024] = "12345";
	char	b[1024] = "123456";
	int		n;

	n = 7;
	printf("%d", ft_strncmp(a, b, n));
	printf("%c", '\0');

}
