#include "../libft.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h> // Для strlen
#include <strings.h>
#include <bsd/string.h>

int	main (void)
{
	int  num1 = '5';
	int num2 = 'r';

	int isnum1;
	int isnum2;

	/* ft_is_alpha */
	printf ("test: \033[0;32m ft_isalpha\033[0m: ");
	isnum1 = ft_isalpha(num1);
	isnum2 = ft_isalpha(num2);
	if (isnum1 == 0 && isnum2 == 1)
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("symbol1: %d ", isnum1);
	printf ("sumbol2: %d \n", isnum2);
		
	/* ----ft_isdigit--- */
	printf ("test: \033[0;32m ft_isdigit\033[0m: ");
	isnum1 = ft_isdigit(num1);
	isnum2 = ft_isdigit(num2);
	if (isnum1 == 1 && isnum2 == 0)
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("symbol1: %d ", isnum1);
	printf ("sumbol2: %d\n", isnum2);

	/* ----ft_isalnum--- */
	int isnoalnum = '&';
	int isnoalnum2 = '.';

	
	int isalnum1_1 = 1;
	int isalnum2_1 = 1;
	printf ("test: \033[0;32m ft_isalnum\033[0m: ");
	isnum1 = ft_isalnum(num1);
	isalnum1_1 = ft_isalnum(isnoalnum);
	isnum2 = ft_isalnum(num2);
	isalnum2_1 = ft_isalnum(isnoalnum2);
	if (isnum1 == 1 && isnum2 == 1 && isalnum1_1 == 0 &&  isalnum2_1 == 0)
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("symbol1: %d ", isnum1);
	printf ("sumbol2: %d ", isnum2);
	printf ("sumbol3: %d ", isalnum1_1);
	printf ("sumbol4: %d\n", isalnum2_1);
	
	/* ----ft_isascii--- */
	int isnoascii = 128;
	int isnoascii2 = -1;
	num2 = '.';

	printf ("test: \033[0;32m ft_isascii\033[0m: ");
	isnum1 = ft_isascii(num1);
	isalnum1_1 = ft_isascii(isnoascii);
	isnum2 = ft_isascii(num2);
	isalnum2_1 = ft_isascii(isnoascii2);
	if (isnum1 == 1 && isnum2 == 1 && isalnum1_1 == 0 &&  isalnum2_1 == 0)
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("symbol1: %d ", isnum1);
	printf ("sumbol2: %d ", isnum2);
	printf ("sumbol3: %d ", isalnum1_1);
	printf ("sumbol4: %d\n", isalnum2_1);

	/* ----ft_isprint--- */
	
	int isnoprint = 8;
	int isnoprint2 = 127;
	num2 = '.';

	printf ("test: \033[0;32m ft_isprint\033[0m: ");
	isnum1 = ft_isprint(num1);
	isalnum1_1 = ft_isprint(isnoprint);
	isnum2 = ft_isprint(num2);
	isalnum2_1 = ft_isprint(isnoprint2);
	if (isnum1 == 1 && isnum2 == 1 && isalnum1_1 == 0 &&  isalnum2_1 == 0)
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("symbol1: %d ", isnum1);
	printf ("sumbol2: %d ", isnum2);
	printf ("sumbol3: %d ", isalnum1_1);
	printf ("sumbol4: %d\n", isalnum2_1);

	/* ----ft_toupper--- */
	char c1 = 'r';
	char c2 = 't';

	char originc1;
	char originc2;
	char  ic1;
	char  ic2;
	printf ("test: \033[0;32m ft_toupper\033[0m: ");
	originc1 = toupper(c1);
	ic1 = ft_toupper(c1);
	originc2 = toupper(c2);
	ic2 = ft_toupper(c2);
	if (originc1 == ic1 && originc2 == ic2 )
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("symbol1: %c ", c1);
	printf ("symbol1: %c ", originc1);
	printf ("sumbol2: %c ", ic1);
	printf ("symbol1: %c ", c2);
	printf ("symbol1: %c ", originc2);
	printf ("sumbol2: %c\n", ic2);

		/* ----ft_tolower--- */
	c1 = 'F';
	c2 = 'X';

	printf ("test: \033[0;32m ft_tolower\033[0m: ");
	originc1 = tolower(c1);
	ic1 = ft_tolower(c1);
	originc2 = tolower(c2);
	ic2 = ft_tolower(c2);
	if (originc1 == ic1 && originc2 == ic2 )
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("symbol1: %c ", c1);
	printf ("symbol1: %c ", originc1);
	printf ("sumbol2: %c ", ic1);
	printf ("symbol1: %c ", c2);
	printf ("symbol1: %c ", originc2);
	printf ("sumbol2: %c\n", ic2);

/* ----ft_strlen--- */
printf ("test: \033[0;32m  ft_strlen\033[0m: ");

	// Массив с исходной строкой
   char str [11]="0123456789";
	
	if (strlen(str) == ft_strlen(str))
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
   //Определение длины строки и вывод результата на консоль
   printf ("Длина «%s» - %zu", str, strlen(str) );
   printf (" | ");
   printf ("Длина ft  «%s» - %zu\n", str, ft_strlen(str) );

  /* ----ft_memcpy--- */
 	
	 printf ("test: \033[0;32m  ft_memcpy\033[0m: ");
	 // источник
	unsigned char src[15] = "Lor5em Ipsum";
	// приемник 
	unsigned char dst[15] = "";
	// приемник данных ft
    unsigned char dst2[15] = "";
	
	// Копируем 5 байт из массива src в массив dst
   	memcpy (dst, src, 8);
	// Копируем 5 байт из массива src в массив dst ft
    ft_memcpy (dst2, src, 8);
	
	if (!strcmp((char *)(dst),(char *)(dst2)))
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("dst: %s ", dst);
	printf ("dstft: %s\n", dst2);

 
 
   /* ----ft_strlcpy--- */
   printf ("test: \033[0;32m ft_strlcpy\033[0m: ");
	
	char  buf[10];      // буфер размером меньше строки
	char   *str2 = "string example";
   size_t  sz;
 
//    buf[0] = '\0';    // избыточная инициализация для отладочной печати
	
//    printf("строка: \"%s\"", str2);
//   printf (" | ");
//    printf("буфер перед копи.: \"%s\"", buf);
    //   printf (" | ");
   sz = ft_strlcpy(buf, str2, sizeof(buf));    
   if (sz >= sizeof(buf))  // пример определения усечения строки  
   {
		printf ("\033[0;32mОК\033[0m");
		printf (" | ");
    	printf("усеч. строки с %zu до %zu симв!", sz, (sizeof(buf) - 1));
   }    
	
	printf (" | ");
   printf("буфер после копи.:  \"%s\"\n", buf);
  
  
  
  
  /* ----ft_strlcat--- */
  
 printf ("test: \033[0;32m ft_strlcat\033[0m: ");

// original

 char 	app_orig[10]="1234567890";
char	dst_orig[10]="abcdefghix";
int res3_orig;
res3_orig = strlcat (dst_orig, app_orig, 10);
//ft 
    // Массив источник данных
   char app3[10]="1234567890";
 
   // Массив приемник данных
   char dst3[10]="abcdefghix";
       
   // Добавляем строку из массива src в массив dst. 
   	int res3 = ft_strlcat (dst3, app3, 10);
	
	if (strcmp((char *)(dst3),(char *)(dst_orig)))
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	
	
	

   // Вывод массива dst на консоль
   printf ("dst-ft: %s | ",dst3);
    printf ("result-ft: %d | ",res3);
	printf (" | | | ");
	printf ("dst-orig: %s | ", dst_orig);
	printf ("result-orig: %d \n", res3_orig);
	
/* ----ft_strchr--- */

 printf ("test: \033[0;32m  ft_strchr\033[0m: ");
// Массив со строкой для поиска
   char src_strchr[11]="abcdefghix";
   // Код искомого символа
   int ch_strchr = 'x';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach_strchr;
   char *ftach_strchr;
  
   // Ищем символ ‘6’
   ach_strchr = strchr(src_strchr,ch_strchr);
   ftach_strchr = ft_strchr(src_strchr,ch_strchr);

   // Выводим результат на консоль

   	if ((ach_strchr-src_strchr+1) == (ftach_strchr-src_strchr+1))
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");

   if (ach_strchr==NULL)
      printf ("Символ в строке не найден | ");
   else
      printf ("Искомый символ (%c) в строке на позиции # %zu | ", *ach_strchr,  ach_strchr - src_strchr+1);
	  // преобразование указателя на символ в строке в число. 
	//  Вычетаем из указателя на символ (str+3), указатель на начало строк (str+0)
	  // и получаем разность адресов указателей  Результатом разности двух указателей является "расстояние" между ними.

       // Выводим результат на консоль
   if (ftach_strchr==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ (%c) в строке на позиции # %zu\n", *ftach_strchr, ftach_strchr - src_strchr+1);
	
	
	/* ----ft_strrchr--- */
	
	 printf ("test: \033[0;32m  ft_strrchr\033[0m: ");
// Массив со строкой для поиска
   char src_strrchr[11]="0623456769";
   // Код искомого символа
   int ch_strrchr = '6';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach_strrchr;
   char *ftach_strrchr;
  
   // Ищем символ ‘6’
   ach_strrchr = strrchr(src_strrchr,ch_strrchr);
   ftach_strrchr = ft_strrchr(src_strrchr,ch_strrchr);

   // Выводим результат на консоль

   	if ((ach_strrchr-src_strrchr+1) == (ftach_strrchr-src_strrchr+1))
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");

   if (ach_strrchr==NULL)
      printf ("Символ в строке не найден | ");
   else
      printf ("Искомый символ (%c) в строке на позиции # %zu | ", *ach_strrchr,  ach_strrchr - src_strrchr+1);
	  // преобразование указателя на символ в строке в число. 
	//  Вычетаем из указателя на символ (str+3), указатель на начало строк (str+0)
	  // и получаем разность адресов указателей  Результатом разности двух указателей является "расстояние" между ними.

       // Выводим результат на консоль
   if (ftach_strchr==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ (%c) в строке на позиции # %zu\n", *ftach_strchr, ftach_strchr - src_strchr+1);
	
	

	/* ----ft_strncmp--- */
	
	 printf ("test: \033[0;32m  ft_strncmp\033[0m: ");

	// Сравниваемые строки
   char str1_strncmp[16]="1204567890";
   char str2_strncmp[16]="1234567190";
	if ((strncmp(str1_strncmp, str2_strncmp,5)) == (ft_strncmp (str1_strncmp, str2_strncmp,5)))
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");

  
   // Сравниваем первые пять символов двух строк
   if (strncmp (str1_strncmp, str2_strncmp,5)==0)
      printf ("Первые пять символов строк идентичны");
   else
      printf ("Первые пять символов строк отличаются");
	printf (" | ");
      // Сравниваем первые пять символов двух строк
   if (ft_strncmp (str1_strncmp, str2_strncmp,5)==0)
      printf ("FT Первые пять символов строк идентичны");
   else
      printf ("FT Первые пять символов строк отличаются");

	printf ("\n");
	
/* ----ft_strnstr--- */
	
	 printf ("test: \033[0;32m  ft_strnstr\033[0m: ");


  // Массив со строкой для поиска
   char str1_ft_strnstr [11]="0123456789";
   // Набор символов, которые должны входить в искомый сегмент
   char str2_ft_strnstr [10]="345";
   // Переменная, в которую будет занесен адрес первой найденной строки
   char *istr_ft_strnstr;
   char *istr_strnstr;

   //Поиск строки
   istr_ft_strnstr = ft_strnstr (str1_ft_strnstr,str2_ft_strnstr, 6);
   istr_strnstr = strnstr (str1_ft_strnstr,str2_ft_strnstr, 6);
	if (istr_ft_strnstr == istr_strnstr)
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");

   //Вывод результата поиска на консоль
   if ( istr_ft_strnstr == NULL)
      printf ("Строка не найдена");
   else
      printf ("Искомая строка начинается с символа %zu",istr_ft_strnstr-str1_ft_strnstr+1);

	printf (" | ");
	if ( istr_strnstr == NULL)
      printf ("Строка не найдена\n");
   else
      printf ("Искомая строка начинается с символа %zu\n",istr_strnstr-str1_ft_strnstr+1);


/* ----ft_atoi--- */
	
	 printf ("test: \033[0;32m  ft_atoi\033[0m: ");


	char	*str1_atoi = "-9223372036854775899"; //Строка для преобразования -214748364799234234234
	char	*str2_atoi = "-9223372036854775899"; //Строка для преобразования
	char	*str3_atoi = "9223372036854775819"; //Строка для преобразования 214748364799234234234
	char	*str4_atoi = "9223372036854775819"; //Строка для преобразования
	char	*str5_atoi = "-456"; //Строка для преобразования
	char	*str6_atoi = "-456"; //Строка для преобразования
	int num_atoi;                //Переменная для записи результата
	int num2_atoi;                //Переменная для записи результата
	int num3_atoi;                //Переменная для записи результата
	int num4_atoi;                //Переменная для записи результата
	int num5_atoi;                //Переменная для записи результата
	int num6_atoi;                //Переменная для записи результата
   
	//Преобразование строки в число типа int
	num_atoi = atoi (str1_atoi);
	num2_atoi = ft_atoi (str2_atoi);
   if (num_atoi == num2_atoi )
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	num3_atoi = atoi (str3_atoi);
	num4_atoi = ft_atoi (str4_atoi);
	 if (num3_atoi == num4_atoi )
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	num5_atoi = atoi (str5_atoi);
	num6_atoi = ft_atoi (str6_atoi);
	 if (num5_atoi == num6_atoi )
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
   //Вывод результата преобразования
   printf ("%d",num_atoi);
   	printf (" | ");
   printf ("ft: %d",num2_atoi);
 	printf (" | ");
   printf ("%d",num3_atoi);
   	printf (" | ");
   printf ("ft: %d",num4_atoi);
   printf (" | ");
   printf ("%d",num5_atoi);
   	printf (" | ");
   printf ("ft: %d\n",num6_atoi);

/* ----ft_memset--- */
printf ("test: \033[0;32m  ft_memset\033[0m: ");

char buf_memset[20] = "whowantstobefree123";
char ft_buf_memset[20] = "whowantstobefree123";
memset(buf_memset, '*', 6);
ft_memset(ft_buf_memset, '*', 6);

 if (strcmp(buf_memset,ft_buf_memset) == 0 )
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
printf ("buffer: %s ", buf_memset);
printf ("ft_buffer: %s\n", ft_buf_memset);
	

/* ----ft_bzero--- */
printf ("test: \033[0;32m  ft_bzero\033[0m: ");
char buf_ft_bzero[20] = "whowantstobefree123";
char ft_buf_ft_bzero[20] = "whowantstobefree123";
	
	bzero(buf_ft_bzero, 2);
	ft_bzero(ft_buf_ft_bzero, 2);

	if (*(buf_ft_bzero+1) == *(ft_buf_ft_bzero+1))
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
	printf ("bzero buffer: %i ", *(buf_ft_bzero));
	printf ("bzero buffer: %i ", *(buf_ft_bzero+1));
	printf ("bzero buffer: %i ", *(buf_ft_bzero+2));
	printf ("ft_buffer: %i ", *(ft_buf_ft_bzero));
	printf ("ft_buffer: %i ", *(ft_buf_ft_bzero+1));
	printf ("ft_buffer: %i\n", *(ft_buf_ft_bzero+2));
	

/* ----ft_memmove--- */
printf ("test: \033[0;32m  ft_memmove\033[0m: ");

	// Исходный массив данных
   unsigned char src_memmove[10]="1234567890";

   // Вывод массива src на консоль
   printf ("src old: %s ",src_memmove);

   // Копируем 3 байта
   ft_memmove (&src_memmove[4], &src_memmove[3], 3);
	if (strcmp((char *)src_memmove, "1234456890") == 0)
		printf ("\033[0;32mОК\033[0m");
	else
		printf ("\033[0;31mFalse\033[0m");
	printf (" | ");
   // Вывод массива src на консоль
   printf ("src new: %s\n",src_memmove);



/* ----ft_memchr--- */
printf ("test: \033[0;32m ft_memchr\033[0m: ");

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




	return(0);
}