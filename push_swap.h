/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <emastran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 12:16:42 by emastran          #+#    #+#             */
/*   Updated: 2026/06/27 12:13:47 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
#include "libft.h"
#include "operations.h"

typedef struct s_list
{
	int			value;
	struct s_list	*next;
}					t_list;

int error_menagment(int argc, char **argv);
float disorder(t_list *a);

#endif
