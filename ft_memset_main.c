/*#include "../libft/libft.h"*/
#include "../libft/ft_memset.c"

#include <stdio.h>
#include <string.h>

int	main (void)
{
	char buf[20] = "whowantstobefree123";
	char ft_buf[20] = "1234567891122112";
	memset(buf, 'x', 6);
	ft_memset(ft_buf, '*', 6);
	printf ("buffer: %s\n", buf);
	printf ("ft_buffer: %s\n", ft_buf);

	return(0);
}
