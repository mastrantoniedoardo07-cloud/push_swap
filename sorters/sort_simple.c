/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:50 by emastran          #+#    #+#             */
/*   Updated: 2026/06/28 12:34:32 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	len_list(t_list *a)
{
	int	len;

	len = 0;
	while (a)
	{
		len++;
		a = a->next;
	}
	return (len);
}

static int	find_index(t_list *a, t_list *target)
{
	int	index;

	index = 0;
	while (a != target)
	{
		index++;
		a = a->next;
	}
	return (index);
}

static t_list	*find_min_node(t_list *a)
{
	t_list	*min;

	min = a;
	while (a)
	{
		if (a->value < min->value)
			min = a;
		a = a->next;
	}
	return (min);
}

void	sort_simple(t_list **a, t_list **b)
{
	int		len;
	int		idx;
	t_list	*min;

	while (*a)
	{
		len = len_list(*a);
		min = find_min_node(*a);
		idx = find_index(*a, min);
		if (idx <= len / 2)
			while (idx-- > 0)
				ra(a);
		else
			while (idx++ < len)
				rra(a);
		pb(a, b);
	}
	while (*b)
		pa(a, b);
}