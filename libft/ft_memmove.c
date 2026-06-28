/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:19:17 by emastran          #+#    #+#             */
/*   Updated: 2026/05/19 15:50:58 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*p;

	if (!dest && !src)
		return (NULL);
	p = (char *)dest;
	s = (char *)src;
	if (s > p)
	{
		while (n > 0)
		{
			*p++ = *s++;
			n--;
		}
	}
	else
	{
		p += n;
		s += n;
		while (n--)
			*(--p) = *(--s);
	}
	return (dest);
}
/*int main(void)
{
	char dest[20] = "abcdefgh";
	char scr[20] = "iii";
	memmove(dest, scr, 3);
	printf("%s", dest);
}*/
