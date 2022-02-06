#include "../libft.h"
#include "../ft_strlcpy.c"
#include "../ft_strlen.c"
#include "../ft_memcpy.c"
#include <stdio.h>
#include <string.h> // Для strlen

char  buf[10];                      // буфер размером меньше строки
 
int main()
{  
   char   *str = "образец строки";
   size_t  sz;
 
   buf[0] = '\0';                   // избыточная инициализация для отладочной печати
 
   printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf);
 
   sz = ft_strlcpy(buf, str, sizeof(buf));    
   if (sz >= sizeof(buf))           // пример определения усечения строки      
      printf("обнаружено усечение строки с %zu до %zu символов !\n", sz, sizeof(buf)-1);
 
   printf("буфер после копирования:  \"%s\"\n", buf);
 
   return 0;
}

