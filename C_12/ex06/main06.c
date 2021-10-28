#include "ft_list.h"
#include<stdio.h>
void    ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

void free_fct(void *a)
{
    free(a);
}

int main()
{
    char *src[5] = {"abcdef", "123", "gfhf", ";lk", ")))"};
    int len;
    t_list *begin;
    char *rez;
   
    ft_list_clear(&begin, &free_fct);
    //len = 4;
	//begin = ft_list_push_strs(len, &*src);
    //rez = begin->data;
    
    
    //while (begin)
    //{
      //  printf("%s \n", begin->data);
        //begin = begin->next;
       
    //}
}
	


