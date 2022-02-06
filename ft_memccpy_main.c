#include "../libft/libft.h"
#include "../libft/ft_memccpy.c"

#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/

int	main (void)
{
	 // Массив источник данных
   unsigned char src[15]="1234567890";

   // Массив приемник данных
   unsigned char dst[15]="";

   // Копируем данные из массива src в массив dst
   ft_memccpy (dst, src, '5', 10);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);

   return 0;
}
