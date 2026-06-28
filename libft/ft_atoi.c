/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:44:09 by emastran          #+#    #+#             */
/*   Updated: 2026/05/21 12:44:13 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	meno;
	int	i;

	i = 0;
	meno = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			meno = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		i = (i * 10) + (*nptr - '0');
		nptr++;
	}
	return (i * meno);
}
