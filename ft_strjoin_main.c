#include "../libft/libft.h"
#include "../libft/ft_memmove.c"
#include "../libft/ft_strjoin.c"
#include "../libft/ft_strlen.c"

#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/

int	main (void)
{
// Исходный массив данных
   char src[10]="12345";
   char src2[10]="12345";
   char *new;

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);
   printf ("src old2: %s\n",src2);

   // Копируем 3 байт
   new = ft_strjoin (src, src2);

   // Вывод массива src на консоль
   printf ("src new: %s\n",new);

   return 0;
}
