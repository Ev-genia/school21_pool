#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*dest;
	int	i;
 	
    dest = 0;
    min = -2;
	max = 2;
    printf("length: %d\n", ft_ultimate_range(&dest, min, max));
	i = 0;
	while (i < max-min)
	{
		printf("%d\n", dest[i]);
		i++;
	}
	if (min > max)
		printf("min>max \n");
}
