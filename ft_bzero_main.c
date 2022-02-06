/*#include "../libft/libft.h"*/
#include "../libft/ft_bzero.c"
 
#include <stdio.h>
#include <strings.h> // для bzero

int	main (void)
{
	char buf[20] = "whowantstobefree123";
	char ft_buf[20] = "1234567891122112";
	
	char res1[20] = "";

	res1[20] = bzero(buf, 3);
	/*ft_bzero(ft_buf, 4);*/
	
	printf ("bzero buffer: %s\n", res1);
	printf ("ft_bzero buffer: %s\n", ft_buf);

	return(0); 
}
