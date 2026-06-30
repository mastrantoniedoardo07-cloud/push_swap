/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:24:36 by emastran          #+#    #+#             */
/*   Updated: 2026/06/30 11:04:19 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	len_list(t_list **a)
{
	int		i;
	t_list	*c;

	i = 0;
	c = *a;
	while (c != NULL)
	{
		i++;
		c = c->next;
	}
	return (i);
}

void	sort_array(int *arr, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*get_first_part(t_list **a)
{
	int		*arr;
	int		len;
	int		to_len;
	int		i;
	t_list	*c;

	len = len_list(a) / 2;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	c = *a;
	to_len = 0;
	i = 0;
	while (to_len < len && c != NULL)
	{
		arr[i] = c->value;
		i++;
		c = c->next;
		to_len++;
	}
	sort_array(arr, len);
	return (arr);
}

int	*get_second_part(t_list **a)
{
	int		*arr;
	int		tot;
	int		half;
	int		i;
	t_list	*c;

	tot = len_list(a);
	half = tot / 2;
	arr = (int *)malloc(sizeof(int) * (tot - half));
	c = *a;
	i = 0;
	while (i < half && c != NULL)
	{
		c = c->next;
		i++;
	}
	i = 0;
	while (c != NULL)
	{
		arr[i] = c->value;
		i++;
		c = c->next;
	}
	sort_array(arr, tot - half);
	return (arr);
}
