/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:35:38 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/02 16:10:01 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

long ft_atol(const char *s)
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