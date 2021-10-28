#include "ft_list.h"
#include<stdio.h>
void    ft_list_push_back(t_list **begin_list, void *data);

int main()
{
	int a = 42;
	int b = 55;
	int c = 67;
	int d = 89;
	void *data2;	
	void *data3;
	void *data4;
	void *data1;
	t_list **begin;
	data1 = &a;
	data2 = &b;
	data3 = &c;
	data4 = &d;

	t_list *elem1 = ft_create_elem(data1);
	t_list *elem2 = ft_create_elem(data2);
	t_list *elem3 = ft_create_elem(data3);

	begin = &elem1;
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = 0;

	int *y = elem3->data;
	printf("Y равен %d",*y);

	ft_list_push_back(&*begin, data4);

	y = elem3->next->data;
	printf("Y  поменял значение на %d", *y);


}
	


