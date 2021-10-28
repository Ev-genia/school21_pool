#include "ft_list.h"
#include<stdio.h>
t_list    *ft_list_push_strs(int size, char **strs);

int main()
{
    char *src[5] = {"abcdef", "123", "gfhf", ";lk", ")))"};
    int len;
    t_list *begin;
    char *rez;
   
    
    len = 4;
	begin = ft_list_push_strs(len, &*src);
    rez = begin->data;
    
    
    while (begin)
    {
        printf("%s \n", begin->data);
        begin = begin->next;
       
    }
}
	


