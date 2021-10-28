#include "ft_list.h"
#include<stdio.h>
t_list    *ft_list_last(t_list *begin_list);

int main()
{
    t_list elem1;
    t_list elem2;
    t_list elem3;
   
    t_list *begin;
    
    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
    int a = 25;
    elem3.data = &a;
    elem3.next = 0;
    
    t_list *y = ft_list_last(begin);
    //int *b = y->data;
	printf("Y равен %d", *((int*)y->data));
}
	



