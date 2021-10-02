#include <unistd.h>
#include "ft_print_alphabet.c"
 
int	main()
{
	ft_print_alphabet();
	write(1, "\n", 1);
}
