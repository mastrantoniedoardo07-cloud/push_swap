/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:51:03 by emastran          #+#    #+#             */
/*   Updated: 2026/05/21 14:51:09 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	t_size;
	size_t	res;

	if (nmemb != 0 && size != 0)
	{
		t_size = nmemb * size;
		res = t_size / size;
		if (res != nmemb)
			return (NULL);
	}
	else
		t_size = 0;
	ptr = malloc(t_size);
	if (ptr == NULL)
		return (NULL);
	while (t_size > 0)
	{
		t_size--;
		((char *)ptr)[t_size] = 0;
	}
	return (ptr);
}
