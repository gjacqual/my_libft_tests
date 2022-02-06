#include "../libft/libft.h"
#include "../libft/ft_atoi.c"
#include "../libft/ft_isdigit.c"
#include <stdio.h>
#include <stdlib.h>  // для atoi

int	main (void)
{
	char	*str1 = "-214748364799234234234"; //Строка для преобразования
	char	*str2 = "-214748364799234234234"; //Строка для преобразования
	int num;                //Переменная для записи результата
	int num2;                //Переменная для записи результата
   
	//Преобразование строки в число типа int
	num = atoi (str1);
	num2 = ft_atoi (str2);
   
   //Вывод результата преобразования
   printf ("%d\n",num);
   printf ("%d\n",num2);
   
   //Завершение работы программы
   return 0; 
}


