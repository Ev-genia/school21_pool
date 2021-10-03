#include <stdio.h>
int ft_atoi(char *str);

int	main()
{
	int	a;

	char	str[200] = "     ---+--2 147 483 648 fd4647";
	a = ft_atoi(str);
	printf("%d", a);
}
