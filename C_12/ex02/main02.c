#include "ft_list.h"
#include<stdio.h>
int    ft_list_size(t_list *begin_list);

int main()
{
    t_list elem1;
    t_list elem2;
    t_list elem3;
   
    t_list *begin;
    
    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
 
    elem3.next = 0;
    
	int y = ft_list_size(begin);
	printf("Y равен %d",y);
}
	



