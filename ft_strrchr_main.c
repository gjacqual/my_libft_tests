#include "../libft/libft.h"
#include "../libft/ft_strrchr.c"
#include "../libft/ft_strlen.c"

#include <stdio.h>
#include <string.h> // Для strlen

int main (void)
{    
  // Массив со строкой для поиска
   char src [11]="0623456769";
   // Код искомого символа
   int ch = '6';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach;
   char *ftach;
  
   // Ищем символ ‘6’
   ach=strrchr (src,ch);
   ftach=ft_strrchr (src,ch);

   // Выводим результат на консоль
   if (ach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %zu\n",ach-src+1);

       // Выводим результат на консоль
   if (ftach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %zu\n",ftach-src+1);

   return 0;
}

