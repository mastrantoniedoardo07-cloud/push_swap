
#include "push_swap.h"

int check_if_numb(t_list **a)
{
    t_list *tmp;

    tmp = *a;
    while (tmp ->next != NULL)
    {
        if (tmp->value =< '0' && tmp->value >= '9')
            tmp = tmp -> next; 
        else
            return (-1);
    }
    return (0);
}
int check_for_dup(t_list **a)
{
    t_list *tmp;
    t_list *che;

    tmp = *a;
    while (tmp ->next != NULL)
    {
        che = tmp ->next;
        while (che != NULL)
        {
            if (tmp->value == che->value)
                return (-1);
            else
                che = che ->next;
        }
        tmp = tmp ->next;
    }
    return (0);
}