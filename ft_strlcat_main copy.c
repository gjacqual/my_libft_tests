#include "../libft/libft.h"
//#include "../libft/ft_strdup.c"
#include "../libft/ft_strlcat.c"
#include "../libft/ft_strlen.c"
#include "../libft/ft_memcpy.c"




#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/
#include <stdlib.h> // Для free


int	main (void)
{

//ft 
    // Массив источник данных
   char app2[10]="1234567890";
 
   // Массив приемник данных
   char dst2[10]="abcdefghix";

   int res2;

   // Добавляем строку из массива src в массив dst. 
   res2 = ft_strlcat (dst2, app2, 10);

   // Вывод массива dst на консоль
   printf ("dst-ft: %s\n",dst2);
    printf ("dst-ft: %d\n",res2);

   return 0;
}
