/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 12:16:42 by emastran          #+#    #+#             */
/*   Updated: 2026/06/28 12:32:48 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"
# include "operations.h"

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;

int		error_management(int argc, char **argv, t_list **a, t_list **b);
double	disorder(t_list *a);
void	sort_simple(t_list **a, t_list **b);

#endif
