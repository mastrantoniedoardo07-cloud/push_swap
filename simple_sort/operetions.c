#include "operations.h"

void sa(t_list a, t_list b)
{
    int temp;

    if (!a || !a->next)
        return;

    temp = a->data;
    a->data = a->next->data;
    a->next->data = temp;

    write(1, "sa\n", 3);
}
void sb(t_list a, t_list b)
{
    int temp;

    if (!b || !b->next)
        return;

    temp = b->data;
    b->data = b->next->data;
    b->next->data = temp;

    write(1, "sb\n", 3);
}
void ss(t_list a, t_list b)
{
    int	temp;

    if (b && b->next != NULL)
	{
		temp = b->data;
    	b->data = b->next->data;
    	b->next->data = temp;
	}
     temp = 0;   
	if (a && a->next != NULL)
	{
		temp = a->data;
		a->data = a->next->data;
    	a->next->data = temp;
	}
    write(1, "ss\n", 3);
}
void pa(t_list *a, t_list *b)
{
	t_list temp;

	if (!b || !*b)
    	return;
	temp = *b;
	*b = (*b)->next;
		temp->next = *a;
		*a = temp;
    write(1, "pa\n", 3);
}
void pb(t_list *a, t_list *b)
{
	t_list temp;

	if (!a || !*a)
    	return;
	temp = *a;
	*a = (*a)->next;
		temp->next = *b;
		*b = temp;
    write(1, "pb\n", 3);
}
void ra(t_list *a, t_list *b)
{
	t_list temp;
	t_list another;

	if (!a || !*a || !(*a)->next)
        return;
	temp = *a;
	*a = (*a)->next;
	temp->next = NULL;
	another = *a;
	while (another->next != NULL)
	{
		another = another ->next;
	}
	another->next = temp;
    write(1, "ra\n", 3);
}
void rb(t_list *a, t_list *b)
{
	t_list temp;
	t_list another;

	if (!b || !*b || !(*b)->next)
        return;
	temp = *b;
	*b = (*b)->next;
	temp->next = NULL;
	another = *b;
	while (another->next != NULL)
	{
		another = another ->next;
	}
	another->next = temp;
    write(1, "rb\n", 3);
}

void rr(t_list *a, t_list *b)
{
	t_list temp;
	t_list another;

	if (b && *b && (*b)->next)
	{
		temp = *b;
		*b = (*b)->next;
		temp->next = NULL;
		another = *b;
		while (another->next != NULL)
			another = another ->next;
		another->next = temp;
	}
	if (a && *a && (*a)->next)
	{
		temp = *a;
		*a = (*a)->next;
		temp->next = NULL;
		another = *a;
		while (another->next != NULL)
			another = another ->next;
		another->next = temp;
	}
    write(1, "rr\n", 3);
}
void rra(t_list *a, t_list *b)
{
	t_list prelast;
	t_list last;
	if(!a || !*a || !(*a)->next)
		return;
	prelast = *a;
	while (prelast->next->next != NULL)
		prelast = prelast->next;
	last = prelast ->next;
	last->next = *a;
	*a = last;
	prelast->next = NULL;
    write(1, "rra\n", 4);
}
void rrb(t_list *a, t_list *b)
{
	t_list prelast;
	t_list last;
	if(!b || !*b || !(*b)->next)
		return;
	prelast = *b;
	while (prelast->next->next != NULL)
		prelast = prelast->next;
	last = prelast ->next;
	last->next = *b;
	*b = last;
	prelast->next = NULL;
    write(1, "rrb\n", 4);
}
void rrr(t_list *a, t_list *b)
{
	t_list prelast;
	t_list last;
	if(b && *b && (*b)->next)
	{
		prelast = *b;
		while (prelast->next->next != NULL)
			prelast = prelast->next;
		last = prelast ->next;
		last->next = *b;
		*b = last;
		prelast->next = NULL;
	}
	if(a && *a && (*a)->next)
	{
		prelast = *a;
		while (prelast->next->next != NULL)
			prelast = prelast->next;
		last = prelast ->next;
		last->next = *a;
		*a = last;
		prelast->next = NULL;
	}
    write(1, "rrr\n", 4);
}


