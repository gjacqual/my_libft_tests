#include "../libft/libft.h"
#include "../libft/ft_itoa.c"
#include "../libft/ft_calloc.c"
#include "../libft/ft_bzero.c"
#include "../libft/ft_strdup.c"
#include "../libft/ft_memcpy.c"
#include "../libft/ft_strlen.c"

#include <stdio.h>
#include <stdlib.h>  // для atoi

char* mx_itoa( int number)
{
    int count = 0;
    int copy = number;
    do {
        count++;
    } while ( copy /= 10 );

    char* result = (char*) calloc( number+1, 1);
    int i = count - 1;
    for ( ; i >= 0; i-- )
    {
        result[i] = number%10 + '0';
        number /= 10;
    }
    return result;
}


int	main (void)
{
	char	*str1; //Строка для преобразования
	char	*str2; //Строка для преобразования
	char	*str3; //Строка для преобразования
	int num = 2147483648;                //Переменная для записи результата
	int num2 = -12345;                //Переменная для записи результата
	int num3 = 0; 
   
	//Преобразование числа в строку типа int
	str1 = ft_itoa (num);
	str2 = ft_itoa (num2);
	str3 = ft_itoa (num3);
   
   //Вывод результата преобразования
   printf ("%s\n",str1);
   printf ("%s\n",str2);
   printf ("%s\n",str3);
   
   //Завершение работы программы
   return 0; 
}


