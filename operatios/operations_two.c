
#include "operations.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (b && *b)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
		write(1, "pa\n", 3);
	}
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (a && *a)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
		write(1, "pb\n", 3);
	}
}

void	ra(t_list **a)
{
	if (a && *a && (*a)->next)
	{
		rotate_stack(a);
		write(1, "ra\n", 3);
	}
}

void	rb(t_list **b)
{
	if (b && *b && (*b)->next)
	{
		rotate_stack(b);
		write(1, "rb\n", 3);
	}
}

void	rr(t_list **a, t_list **b)
{
	if ((a && *a && (*a)->next) || (b && *b && (*b)->next))
	{
		if (a && *a && (*a)->next)
			rotate_stack(a);
		if (b && *b && (*b)->next)
			rotate_stack(b);
		write(1, "rr\n", 3);
	}
}