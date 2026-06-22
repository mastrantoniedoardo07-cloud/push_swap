/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 09:25:13 by edoardo           #+#    #+#             */
/*   Updated: 2026/06/22 09:50:21 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef SIMPLE_SORT_H
#define SIMPLE_SORT_H

#include "libft.h"

typedef struct s_list
{
    int           data;
    struct s_list *next;
} t_list;

void sa(t_list a, t_list b);
void sb(t_list a, t_list b);
void ss(t_list a, t_list b);
void pa(t_list *a, t_list *b);
void pb(t_list *a, t_list *b);
void ra(t_list *a, t_list *b);
void rb(t_list *a, t_list *b);
void rr(t_list *a, t_list *b);
void rra(t_list *a, t_list *b);
void rrb(t_list *a, t_list *b);
void rrr(t_list *a, t_list *b);

#endif 
