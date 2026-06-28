/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:17:17 by emastran          #+#    #+#             */
/*   Updated: 2026/05/26 11:20:18 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_l = NULL;
	while (lst != NULL)
	{
		content = f(lst -> content);
		new_n = ft_lstnew(content);
		if (new_n == NULL)
		{
			del(content);
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		ft_lstadd_back(&new_l, new_n);
		lst = lst -> next;
	}
	return (new_l);
}
