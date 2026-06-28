#include "push_swap.h"

static void	swap_stack(t_list **stack)
{
	int	temp;

	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

static void	rotate_stack(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	*stack = (*stack)->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
}

static void	rev_rotate_stack(t_list **stack)
{
	t_list	*pre;
	t_list	*last;

	pre = *stack;
	while (pre->next->next)
		pre = pre->next;
	last = pre->next;
	pre->next = NULL;
	last->next = *stack;
	*stack = last;
}

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