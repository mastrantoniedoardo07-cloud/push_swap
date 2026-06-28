#include "operations.h"

void	rra(t_list **a)
{
	if (a && *a && (*a)->next)
	{
		rev_rotate_stack(a);
		write(1, "rra\n", 4);
	}
}

void	rrb(t_list **b)
{
	if (b && *b && (*b)->next)
	{
		rev_rotate_stack(b);
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_list **a, t_list **b)
{
	if ((a && *a && (*a)->next) || (b && *b && (*b)->next))
	{
		if (a && *a && (*a)->next)
			rev_rotate_stack(a);
		if (b && *b && (*b)->next)
			rev_rotate_stack(b);
		write(1, "rrr\n", 4);
	}
}