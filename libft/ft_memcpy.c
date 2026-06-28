/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:47:31 by emastran          #+#    #+#             */
/*   Updated: 2026/05/18 15:27:24 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*p;

	p = dest;
	s = src;
	while (n > 0)
	{
		p[n - 1] = s[n - 1];
		n--;
	}
	return (dest);
}
/*int main(void)
{
        char src[] = "Hello world";
        char dest[20] = "ciao";

        memcpy(dest, src, 12);

        printf("src : %s\n", src);
        printf("dest: %s\n", dest);

        return 0;
}*/
