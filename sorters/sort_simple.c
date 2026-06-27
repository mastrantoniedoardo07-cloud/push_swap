/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <emastran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:50 by emastran          #+#    #+#             */
/*   Updated: 2026/06/27 14:50:30 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int len_list(t_list *a)
{
    int len;
    t_list *temp;

    len = 0;
    temp = a;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return (len);
}
int find_index(t_list *a, t_list *target)
{
    int index;
    t_list *temp;

    index = 0;
    temp = a;
    while (temp != target)
    {
        index++;
        temp = temp->next;
    }
    return (index);
}
t_list *find_min_node(t_list *a)
{
    t_list *min_node;
    t_list *temp;

    min_node = a;
    temp = a;
    while (temp != NULL)
    {
        if (temp->value < min_node->value)
            min_node = temp;
        temp = temp->next;
    }
    return (min_node);
}
void sort_simple(t_list **a, t_list **b)
{
	int		len;
	int		index;
	t_list	*min_node;

	while (*a != NULL)
	{
		len = len_list(*a);
		min_node = find_min_node(*a);
		index = find_index(*a, min_node);
		if(index <= len/2)
		{
			while(0 < index)
			{
				ra(a);
				index--;
			}
		}
		else
		{
    		while (index < len)
    		{
      		  rra(a);
			  index++;
    		}
		}
		pb(a, b);
	}
}