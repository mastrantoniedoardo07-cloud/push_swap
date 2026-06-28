
#include "push_swap.h"

static int	len_list(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

double	disorder(t_list *a)
{
	double	score;
	double	div;

	if (!a || !a->next)
		return (0.0);
	div = 1.0 / (len_list(a) - 1);
	score = 0.0;
	while (a->next)
	{
		if (a->value > a->next->value)
			score += div;
		a = a->next;
	}
	return (score);
}
