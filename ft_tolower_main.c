#include "../libft/libft.h"
#include "../libft/ft_tolower.c"

#include <stdio.h>
#include <ctype.h>
int	main (void)
{
	char s1 = 'R';
	char s2 = 'T';

	char is1;
	char  is2;

	is1 = tolower(s1);
	is2 = ft_tolower(s2);
	printf ("symbol1: %c\n", is1);
	printf ("sumbol2: %c\n", is2);

	return(0);
}
