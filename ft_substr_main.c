#include "../libft/libft.h"
#include "../libft/ft_substr.c"
#include "../libft/ft_strlen.c"
#include "../libft/ft_strdup.c"
#include "../libft/ft_memcpy.c"
#include "../libft/ft_memmove.c"



#include <stdio.h>
#include <string.h> // Для strlen

int main (void)
{    
   // Массив с исходной строкой
   char str [11]="0123456789";
   char *strnew;

   strnew = ft_substr(str, 2, 4);

   //Определение длины строки и вывод результата на консоль
   
   printf ("Новая строка «%s»", strnew );

   return 0;
}

