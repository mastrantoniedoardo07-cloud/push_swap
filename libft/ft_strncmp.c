/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:30:52 by emastran          #+#    #+#             */
/*   Updated: 2026/05/20 11:56:58 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i]
			&& (unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		if ((unsigned char)s1[i] != (unsigned char)s2[i]
			&& (unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return (0);
			i++;
		}
		n--;
	}
	return (0);
}
