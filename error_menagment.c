/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_menagment.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edoardo <edoardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:50:10 by emastran          #+#    #+#             */
/*   Updated: 2026/06/28 12:33:11 by edoardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	split_and_populate(char *str, t_list **a)
{
	char	**s;
	int		i;
	int		*p;

	s = ft_split(str, ' ');
	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		p = malloc(sizeof(int));
		if (p)
		{
			*p = ft_atoi(s[i]);
			ft_lstadd_back(a, ft_lstnew((void *)p));
		}
		free(s[i++]);
	}
	free(s);
}

t_list	**sort_and_fill(int argc, char **argv, t_list **a)
{
	int	i;
	int	*p;

	if (argc == 3 && ft_strchr(argv[2], ' '))
		split_and_populate(argv[2], a);
	else
	{
		i = 2;
		while (i < argc)
		{
			p = malloc(sizeof(int));
			if (p)
			{
				*p = ft_atoi(argv[i]);
				ft_lstadd_back(a, ft_lstnew((void *)p));
			}
			i++;
		}
	}
	return (a);
}

static void	check_flag(int argc, char **argv, t_list **a, t_list **b)
{
	double	in_order;

	in_order = disorder(*a);
	if (ft_strncmp(argv[1], "--simple", 9) == 0)
		sort_simple(a, b);
	else if (ft_strncmp(argv[1], "--adaptive", 11) == 0)
	{
		if (in_order < 0.2)
			sort_simple(a, b);
		else if (in_order >= 0.2 && in_order < 0.5)
			;
		else
			;
	}
	else if (ft_strncmp(argv[1], "--medium", 9) == 0)
		;
	else if (ft_strncmp(argv[1], "--complex", 10) == 0)
		;
	else
		write(2, "Error\n", 6);
}

int	error_management(int argc, char **argv, t_list **a, t_list **b)
{
	if (argc < 3)
		return (write(2, "Error\n", 6));
	a = sort_and_fill(argc, argv, a);
	if (!*a)
		return (write(2, "Error\n", 6));
	check_flag(argc, argv, a, b);
	return (0);
}
