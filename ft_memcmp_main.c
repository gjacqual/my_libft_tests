/*#include "../libft/libft.h"*/
#include "../libft/ft_memcmp.c"

#include <stdio.h>
#include <string.h>

int	main (void)
{
	char buf[20] = "1234567890";
	char buf2[20] = "13234567890";
	int test1 = memcmp(buf, buf2, 6);
	int test2 = ft_memcmp(buf, buf2, 6);
	printf ("basic func: %d\n", test1);
	printf ("my ft funk: %d\n", test2);

	return(0);
}
