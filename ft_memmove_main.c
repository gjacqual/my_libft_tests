#include "../libft/libft.h"
#include "../libft/ft_memmove.c"

#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/

int	main (void)
{
// Исходный массив данных
   unsigned char src[10]="1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s\n",src);

   // Копируем 3 байт
   ft_memmove (&src[4], &src[3], 3);

   // Вывод массива src на консоль
   printf ("src new: %s\n",src);

   return 0;
}
