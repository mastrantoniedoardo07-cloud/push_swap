/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_menagment.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <emastran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:50:10 by emastran          #+#    #+#             */
/*   Updated: 2026/06/27 12:14:41 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void split_and_populate(char **argv, t_list **a)
{
    char    **splitted;
    int     i;
    int     *pir;
    t_list  *new;

    splitted = ft_split(argv[2], ' ');
    if (!splitted)
        return ;
    i = 0;
    while (splitted[i] != NULL)
    {
        pir = malloc(sizeof(int));
        if (!pir)
            return ;
        *pir = ft_atoi(splitted[i]);
        new = ft_lstnew((void *)pir);
        ft_lstadd_back(a, new);
        i++;
    }
    while (i > 0)
    {
        free(splitted[i - 1]);
        i--;
    }
    free(splitted);
}

t_list **sort_and_fill(int argc, char **argv, t_list **a)
{
    int i;
    int *pir;
    t_list  *new;

    if (ft_strchr(argv[2], ' '))
    {
        split_and_populate(argv, a);
    }
    else
    {
        i = 2;
        while (i < argc)
        {
            pir = malloc(sizeof(int));
            if (!pir)
                return (NULL);
            *pir = ft_atoi(argv[i]);
            new = ft_lstnew((void *)pir);
            ft_lstadd_back(a, new);
            i++;
        }
    }
    return (a);
}

t_list **list(int argc, char **argv, t_list **a)
{
    a = sort_and_fill(argc, argv, a);
    return (a);
}

int error_menagment(int argc, char **argv, t_list **a, t_list **b)
{
    float   in_order;

    if (argc <= 2)
        return (write(2, "Error\n", 6));
    a = list(argc, argv, a);
    in_order = disorder(a)
    if (argc > 3)
    {
        if (ft_strncmp(argv[3], "--simple", 9) == 0)
            sort_simple(a, b);
        else if (ft_strncmp(argv[3], "--medium", 9) == 0)
        {
            /* ... */
        }
        else if (ft_strncmp(argv[3], "--complex", 10) == 0)
        {
            /* ... */
        }
        else if (ft_strncmp(argv[3], "--adaptive", 11) == 0)
        {
            if (in_order < 0.2f)
                sort_simple(a, b)
            if (in_order > 0.2f && in_order < 0.5f)
                /**/
            if (in_order > 0.5f)
                /**/
        }
        else
            return (write(2, "Error\n", 6));
    }
    return (0);
}
