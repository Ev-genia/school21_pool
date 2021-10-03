#include <stdio.h>

int ft_strlen(char *str);

int	main()
{
	int		i;
	int		j;
	char	a[1024] = "123456";
	i = ft_strlen(a);
	j = strlen(a);
	printf("%d\n", i);
	printf("%d", j);
}
