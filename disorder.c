
#include "operations.h"

static int len_list(t_list *a)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}
float disorder(t_list *a)
{
    float   disorder;
    float   divider;

    if (!a || !a->next)
        return (0.0f);
    divider = 1.0f / (len_list(a) - 1);
    disorder = 0.0f;
    while (a->next != NULL)
    {
        if (a->value > a->next->value)
        {
            disorder += divider;
        }
        a = a->next;
    }
    return (disorder);
}
