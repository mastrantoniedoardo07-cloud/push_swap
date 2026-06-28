#include "push_swap.h"
#include "operations.h"

void	sa(t_list **a)
{
	if (a && *a && (*a)->next)
	{
		swap_stack(a);
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **b)
{
	if (b && *b && (*b)->next)
	{
		swap_stack(b);
		write(1, "sb\n", 3);
	}
}

void	ss(t_list **a, t_list **b)
{
	if ((a && *a && (*a)->next) || (b && *b && (*b)->next))
	{
		if (a && *a && (*a)->next)
			swap_stack(a);
		if (b && *b && (*b)->next)
			swap_stack(b);
		write(1, "ss\n", 3);
	}
}
