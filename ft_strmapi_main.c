#include "../libft/libft.h"
#include "../libft/ft_strmapi.c"
#include <stdio.h>
#include <ctype.h>
#include <string.h>


char teststrmapi(char c)
{
	if (c == 't')
	   return c = 'x';
	return c = 'r';
}



int main (void)
{    
	



	// Исходный массивi
  char src[15]="wwfd2weweas";

  char  str = ft_strmapi(*src, teststrmapi);
   
   //Значение новой строки
   printf ("Новая строка  «%s»", str);




   return 0;
}

