#include "../libft/libft.h"
//#include "../libft/ft_strdup.c"
#include "../libft/ft_strlcat.c"
#include "../libft/ft_strlen.c"
#include "../libft/ft_memcpy.c"
#include "../libft/ft_memchr.c"




#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/
#include <stdlib.h> // Для free



char  buf[10];                      // буфер размером меньше строки
 
int main()
{  char   *str = "образец строки";
   size_t  sz;
 
   buf[0] = '\0';                   // избыточная инициализация для отладочной печати
 
   printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf);
 
   sz = ft_strlcat(buf, str, sizeof(buf));    
   if (sz >= sizeof(buf))           // пример определения усечения строки      
      printf("обнаружено усечение строки с %zu до %zu символов !\n", sz, sizeof(buf)-1);
 
   printf("буфер после копирования:  \"%s\"\n", buf);
 
   return 0;

}
