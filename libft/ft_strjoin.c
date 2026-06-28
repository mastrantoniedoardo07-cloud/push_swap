/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 11:21:09 by emastran          #+#    #+#             */
/*   Updated: 2026/05/23 11:21:44 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	size_t	i;
	size_t	temp;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	i1 = 0;
	while (s1[i1] != '\0')
		i1++;
	i2 = 0;
	while (s2[i2] != '\0')
		i2++;
	p = (char *)malloc(sizeof(char) * (i1 + i2 + 1));
	if (p == NULL)
		return (NULL);
	i = -1;
	while (++i < i1)
		p[i] = s1[i];
	temp = 0;
	while (temp < i2)
		p[i++] = s2[temp++];
	p[i] = '\0';
	return (p);
}
