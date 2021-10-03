#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int	min;
	int	max;
	int	*dest;
	int	i;

	min = -2;
	max = 2;
	dest = ft_range(min, max);
	i = 0;
	while (min <  max)
	{
		printf("%d\n", dest[i]);
		i++;
		min++;
	}
	if (min >= max)
		printf("%p\n", dest);
}
