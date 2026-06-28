/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:06:46 by emastran          #+#    #+#             */
/*   Updated: 2026/05/26 11:07:01 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cor;
	t_list	*new;

	if (lst == NULL || del == NULL)
		return ;
	cor = *lst;
	while (cor != NULL)
	{
		new = cor -> next;
		ft_lstdelone(cor, del);
		cor = new;
	}
	*lst = NULL;
}
