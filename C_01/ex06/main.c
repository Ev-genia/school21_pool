#include <unistd.h>
#include "ft_putnbr.c"
#include "ft_strlen.c"

int	main()
{
	char	*str = "09 87";
	int		len;

	len = ft_strlen(str);
	ft_putnbr(len);
}
