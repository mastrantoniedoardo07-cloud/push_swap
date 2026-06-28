/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:19:12 by emastran          #+#    #+#             */
/*   Updated: 2026/05/21 10:19:16 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*c;

	p = (const unsigned char *)s1;
	c = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*p != *c)
			return (*p - *c);
		p++;
		c++;
		n--;
	}
	return (0);
}
