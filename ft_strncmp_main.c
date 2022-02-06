#include "../libft/libft.h"
#include "../libft/ft_strncmp.c"
#include <stdio.h>
#include <string.h> // Для strlen

int main (void)
{

 // Сравниваемые строки
   char str1[16]="1234567890";
   char str2[16]="1224507890";
  
   // Сравниваем первые пять символов двух строк
   if (strncmp (str1, str2,5)==0)
      puts ("Первые пять символов строк идентичны");
   else
      puts ("Первые пять символов строк отличаются");



      // Сравниваем первые пять символов двух строк
   if (ft_strncmp (str1, str2,5)==0)
      puts ("FT Первые пять символов строк идентичны");
   else
      puts ("FT Первые пять символов строк отличаются");

   return 0;	
}

