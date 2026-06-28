
#include "push_swap.h"

static int	len_list(t_list **a)
{
	int	i;
	t_list tmp;

	tmp = *a;
	i = 0;
	while (tmp -> next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

double	disorder(t_list **a)
{
	double	score;
	double	div;
	t_list tmp;

	tmp = *a;
	if (tmp || !tmp->next)
		return (0.0);
	div = 1.0/ (len_list(a) - 1);
	score = 0.0;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			score += div;
		tmp = tmp->next;
	}
	return (score);
}
