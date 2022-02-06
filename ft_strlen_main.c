#include "../libft/libft.h"
#include "../libft/ft_strlen.c"
#include <stdio.h>
#include <string.h> // Для strlen

int main (void)
{    
   // Массив с исходной строкой
   char str [11]="0123456789";

   //Определение длины строки и вывод результата на консоль
   printf ("Длина строки «%s» - %zu символов\n", str, strlen(str) );
   printf ("Длина строки ft функции «%s» - %zu символов\n", str, ft_strlen(str) );

   return 0;
}

