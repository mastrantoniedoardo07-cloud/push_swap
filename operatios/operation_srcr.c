
#include "operations.h"

void	swap_stack(t_list **stack)
{
	int	temp;

	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
}

void	rotate_stack(t_list **stack)
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

void	rev_rotate_stack(t_list **stack)
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