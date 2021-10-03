#include "ft_strcpy.c"
#include <stdio.h>
#include <string.h>

int	main()
{
	   // Массив источник данных
   char src[1024]="first string \0second string";
 
   // Массив приемник данных
   char dst[1024]="";
 
printf ("src: %s %s \n",src, &src[14]);
	ft_strcpy(dst, src);
	
     // Вывод массива dst на консоль
   printf ("dst: %s %s\n",dst, &dst[14]);;
}
