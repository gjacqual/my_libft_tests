#include "../libft.h"
#include "../ft_isalpha.c"

#include <stdio.h>

int	main (void)
{
	int  num1 = '5';
	int num2 = 'r';

	int isnum1;
	int isnum2;

	isnum1 = ft_isalpha(num1);
	isnum2 = ft_isalpha(num2);
	printf ("symbol1: %d\n", isnum1);
	printf ("sumbol2: %d\n", isnum2);

	return(0);
}
