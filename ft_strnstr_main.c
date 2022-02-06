#include "../libft/libft.h"
#include "../libft/ft_strnstr.c"
#include "../libft/ft_strlen.c"
#include "../libft/ft_strncmp.c"

#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/

int	main (void)
{
  // Массив со строкой для поиска
   char str1 [11]="0123456789";
   // Набор символов, которые должны входить в искомый сегмент
   char str2 [10]="345";
   // Переменная, в которую будет занесен адрес первой найденной строки
   char *istr;

   //Поиск строки
   istr = ft_strnstr (str1,str2, 6);

   //Вывод результата поиска на консоль
   if ( istr == NULL)
      printf ("Строка не найдена\n");
   else
      printf ("Искомая строка начинается с символа %zu\n",istr-str1+1);

   return 0;
}
