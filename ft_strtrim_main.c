#include "../libft/libft.h"
#include "../libft/ft_strdup.c"
#include "../libft/ft_memcpy.c"
#include "../libft/ft_strlen.c"
#include "../libft/ft_strtrim.c"
#include "../libft/ft_strrchr.c"
#include "../libft/ft_strchr.c"
#include "../libft/ft_putendl_fd.c"
#include "../libft/ft_strlcpy.c"
#include "../libft/ft_putchar_fd.c"
#include "../libft/ft_putstr_fd.c"
#include "../libft/ft_substr.c"
#include "../libft/ft_memmove.c"





#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/
#include <stdlib.h> // Для free
#include <sys/types.h>



int					main(void)
{
	ft_putendl_fd(ft_strtrim("lorem ipsum dolor sit am", "lm"), 1);
	return (0);
}

