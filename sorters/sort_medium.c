/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 15:25:40 by emastran          #+#    #+#             */
/*   Updated: 2026/06/29 11:43:07 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Trova la posizione (indice) del numero più grande all'interno dello Stack B.
*/
int	find_max_idx(t_list *b)
{
	t_list	*tmp;
	int		max_val;
	int		max_idx;
	int		i;

	tmp = b;
	max_val = b->value;
	max_idx = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->value > max_val)
		{
			max_val = tmp->value;
			max_idx = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (max_idx);
}

/*
** Ordina un array di interi in ordine crescente (Selection Sort).
*/
void	sort_array(int *arr, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < len)
	{
		j = i;
		while (++j < len)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

/*
** Alloca un array di interi, vi copia gli elementi dello stack A e li ordina.
*/
int	*get_sorted_array(t_list *a, int len)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	i = 0;
	while (a)
	{
		arr[i++] = a->value;
		a = a->next;
	}
	sort_array(arr, len);
	return (arr);
}

/*
** Fase 1: Smista lo Stack A nello Stack B dividendo i valori in chunk.
*/
void	push_chunks(t_list **a, t_list **b, int *arr, int n)
{
	int	limit;
	int	size;

	size = 20;
	if (n > 100)
		size = 45;
	limit = size - 1;
	while (*a)
	{
		if ((*a)->value <= arr[limit])
		{
			pb(a, b);
			if (len_list(b) % size == 0)
				limit += size;
			if (limit >= n)
				limit = n - 1;
		}
		else
			ra(a);
	}
}

/*
** Funzione principale che esegue l'intero Chunk Sort (Fase 1 e Fase 2).
*/
void	sort_large(t_list **a, t_list **b)
{
	int	*arr;
	int	n;
	int	max_idx;

	n = len_list(a);
	arr = get_sorted_array(*a, n);
	if (!arr)
		return ;
	push_chunks(a, b, arr, n);
	free(arr);
	while (*b)
	{
		max_idx = find_max_idx(*b);
		if (max_idx > len_list(b) / 2)
			max_idx = max_idx - len_list(b);
		while (max_idx > 0 && max_idx-- > 0)
			rb(b);
		while (max_idx < 0 && max_idx++ < 0)
			rrb(b);
		pa(a, b);
	}
