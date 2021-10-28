#include <unistd.h>
#include <stdio.h>
int	ft_any(char **tab, int(*f)(char*));

int	ft_strlen(char *str)
{
	if (*str == 'a')
		return (0);
	return (1);
}

int	main(void)
{
	char	*tab[4] = {"abc", "bc", "abc", NULL};

	printf("%d ", ft_any(&*tab, &ft_strlen));
}
