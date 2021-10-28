#include <unistd.h>
#include <stdio.h>
int	ft_count_if(char **tab, int lenght, int(*f)(char*));

int	ft_strlen(char *str)
{
	if (*str == 'a')
		return (0);
	return (1);
}

int	main(void)
{
	char	*tab[5] = {"bc", "bc", "bc", "abc", "abd"};

	printf("%d ", ft_count_if(&*tab, 4, &ft_strlen));
}
