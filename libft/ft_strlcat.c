/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:25:19 by emastran          #+#    #+#             */
/*   Updated: 2026/05/26 11:25:27 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	len_src;

	i = 0;
	c = 0;
	len_src = 0;
	while (i < size && dst[i] != '\0')
		i++;
	while (src[len_src] != '\0')
		len_src++;
	if (i == size)
		return (len_src + size);
	while (src[c] != '\0' && c < size - i - 1)
	{
		dst[c + i] = src[c];
		c++;
	}
	dst[c + i] = '\0';
	return (len_src + i);
}
/*int main(void)
{
	char dst[20] = "abc";
	char src[20] = "aaaaa";
	size_t result = strlcat(dst, src, 3);
	printf("%s", dst);
	printf("%zu", result);
}*/
