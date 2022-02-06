#include "../libft/libft.h"
#include "../libft/ft_strdup.c"
#include "../libft/ft_memcpy.c"
#include "../libft/ft_strlen.c"




#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/
#include <stdlib.h> // Для free


int	main (void)
{
 // Исходная строка
   char str [11]="0123456789";
   // Переменная, в которую будет помещен указатель на дубликат строки
   char *istr;
   char *istr_ft;

   // Дублирование строки
   istr = strdup (str);
   istr_ft = ft_strdup (str);

   // Вывод дубликата на консоль
   printf ("Дубликат: %s\n", istr);
   printf ("Дубликат ft: %s\n", istr_ft);

   // Очищаем память, выделенную под дубликат
   free (istr);
    free (istr_ft);

   return 0;
}
