/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:40:22 by emastran          #+#    #+#             */
/*   Updated: 2026/05/20 12:40:24 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return ((void *)p);
		n--;
	}
	return (NULL);
}
