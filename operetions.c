#include "push_swap.h"

/* ==================== SWAP OPERATIONS ==================== */

void	sa(t_list **a)
{
	int	temp;

	if (!a || !*a || !(*a)->next)
		return ;
	temp = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = temp;
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	int	temp;

	if (!b || !*b || !(*b)->next)
		return ;
	temp = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = temp;
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	int	temp;
	int	flag;

	flag = 0;
	if (a && *a && (*a)->next)
	{
		temp = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = temp;
		flag = 1;
	}
	if (b && *b && (*b)->next)
	{
		temp = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = temp;
		flag = 1;
	}
	if (flag)
		write(1, "ss\n", 3);
}

/* ==================== PUSH OPERATIONS ==================== */

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!b || !*b)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!a || !*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	write(1, "pb\n", 3);
}

/* ==================== ROTATE OPERATIONS ==================== */

void	ra(t_list **a)
{
	t_list	*first;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*first;
	t_list	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*first;
	t_list	*last;
	int		flag;

	flag = 0;
	if (a && *a && (*a)->next)
	{
		first = *a;
		*a = (*a)->next;
		first->next = NULL;
		last = *a;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
		flag = 1;
	}
	if (b && *b && (*b)->next)
	{
		first = *b;
		*b = (*b)->next;
		first->next = NULL;
		last = *b;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
		flag = 1;
	}
	if (flag)
		write(1, "rr\n", 3);
}

/* ==================== REVERSE ROTATE OPERATIONS ==================== */

void	rra(t_list **a)
{
	t_list	*prelast;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	prelast = *a;
	while (prelast->next->next != NULL)
		prelast = prelast->next;
	last = prelast->next;
	prelast->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*prelast;
	t_list	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	prelast = *b;
	while (prelast->next->next != NULL)
		prelast = prelast->next;
	last = prelast->next;
	prelast->next = NULL;
	last->next = *b;
	*b = last;
	write(1, "rrb\n", 4);
}

#include "push_swap.h"

/* ==================== STATIC HELPERS ==================== */

static void	swap_stack(t_list **stack)
{
	int	temp;

	temp = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp;
}

static void	rotate_stack(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	first = *stack;
	*stack = (*stack)->next;
	first->next = NULL;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
}

static void	rev_rotate_stack(t_list **stack)
{
	t_list	*prelast;
	t_list	*last;

	prelast = *stack;
	while (prelast->next->next != NULL)
		prelast = prelast->next;
	last = prelast->next;
	prelast->next = NULL;
	last->next = *stack;
	*stack = last;
}

/* ==================== SWAP OPERATIONS ==================== */

void	sa(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	swap_stack(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	swap_stack(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	int	flag;

	flag = 0;
	if (a && *a && (*a)->next)
	{
		swap_stack(a);
		flag = 1;
	}
	if (b && *b && (*b)->next)
	{
		swap_stack(b);
		flag = 1;
	}
	if (flag)
		write(1, "ss\n", 3);
}

/* ==================== PUSH OPERATIONS ==================== */

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!b || !*b)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!a || !*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	write(1, "pb\n", 3);
}

/* ==================== ROTATE OPERATIONS ==================== */

void	ra(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	rotate_stack(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	rotate_stack(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	int	flag;

	flag = 0;
	if (a && *a && (*a)->next)
	{
		rotate_stack(a);
		flag = 1;
	}
	if (b && *b && (*b)->next)
	{
		rotate_stack(b);
		flag = 1;
	}
	if (flag)
		write(1, "rr\n", 3);
}

/* ==================== REVERSE ROTATE OPERATIONS ==================== */

void	rra(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	rev_rotate_stack(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	rev_rotate_stack(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	int	flag;

	flag = 0;
	if (a && *a && (*a)->next)
	{
		rev_rotate_stack(a);
		flag = 1;
	}
	if (b && *b && (*b)->next)
	{
		rev_rotate_stack(b);
		flag = 1;
	}
	if (flag)
		write(1, "rrr\n", 4);
}


