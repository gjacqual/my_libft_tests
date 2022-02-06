#include "../libft/libft.h"
#include "../libft/ft_memchr.c"
#include <stdio.h>  //Для printf
#include <string.h>   //Для memchr

int main (void)
{
   // Исходный массив
   unsigned char src[15]="1234567890";
   unsigned char src2[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;
   
   char *sym2;

   // Вывод исходного массива
   printf ("src old: %s\n",src);
   printf ("src old2: %s\n",src2);

   // Поиск требуемого символа
   sym = memchr (src, '4', 10);
   sym2 = ft_memchr (src2, '5', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='!';
	if (sym2 != NULL )
		sym2[0]='!';
   // Вывод исходного массива
   printf ("src new: %s\n",src);
   printf ("src new2: %s\n",src2);

   return 0;
}
