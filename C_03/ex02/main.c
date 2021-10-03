#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int	main ()
{
	char	a[1024] = "12345";
	char	b[1024] = "_abcd";

	ft_strcat(a, b);
	printf("%s", a);
	printf("%c", '\0');

}
