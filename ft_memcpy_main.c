/*#include "../libft/libft.h"*/
#include "../libft/ft_memcpy.c"

#include <stdio.h> /*для prinf */
#include <string.h> /*для этой функции*/

int	main (void)
{
	//массив источник данных 
	unsigned char src[15] = "1234567890";
	// массив приемник данных
	unsigned char dst[15] = "";
	// массив приемник данных ft
    unsigned char dst2[15] = "";
	
	
	 // Копируем 6 байт из массива src в массив dst
   	memcpy (dst, src, 6);
	// Копируем 6 байт из массива src в массив dst ft
    ft_memcpy (dst2, src, 6);
	
	printf ("dst: %s\n", dst);
	printf ("dstft: %s\n", dst2);
	return(0);
}
