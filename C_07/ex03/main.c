#include <stdio.h>

char	*ft_strjoin(int size, char **srts, char *sep);

int	main(void)
{
    char    *strs[3] = {"cc"};
    char    *dest;
    char    *sep = "_";
    
    dest = ft_strjoin(3, strs, sep);
    printf("%s\n", dest);
}

