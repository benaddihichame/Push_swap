/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:35:38 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/06/27 14:15:26 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int count_args(int ac, char **av)
{
    int i;
    int count;

    i = 1;
    count = 0;
    while (i < ac)
    {
        if (check_int(av[i]) == 1)
            count++;
        i++;
    }
    return (count);
}

void    space_for_stack(int ac , char **av)
{
    int count;
    t_stack *a;
    t_stack *b;

    count = count_args(ac, av);
    a = malloc(sizeof(t_stack) * count);
    b = malloc(sizeof(t_stack) * count);
    if (a == NULL || b == NULL)
        return ;
}

void    init(t_stack *quandel)
{
    t_stack *a;
    t_stack *b;

    a[0].index = 0;
    a[0].num = 0;
    a[0].next = NULL;
    a[0].prev = NULL;
    a[0].target = 0;
    b[0].index = 0;
    b[0].num = 0;
    b[0].next = NULL;
    b[0].prev = NULL;
    b[0].target = 0;
}

static long ft_atol(const char *s)
{
    long result;
    int sign;

    result = 0;
    sign = 1;
    while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\v' || *s == '\f')
        s++;
    if (*s == '+' || *s == '-')
    {
        if (sign == '-')
            sign = -1;
        s++;
    }
    while (ft_isdigit(*s))
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    return (result * sign);
}