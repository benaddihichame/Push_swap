/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:35:38 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/15 12:45:27 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
// regarde si la pile est dans l'ordre ou pas si le numero de la box  et plus grand que la prochaine c pas sorted
bool    stack_sorted(t_stack *stack)
{
    if(!stack)
        return (1);
    while(stack->next != NULL)
    {
        if(stack->num > stack->next->num)
            return (false);
        stack = stack->next;
    }
    return (true);
}

int mod_len(t_stack *node)
{
    int i;

    if(!node)
        return (0);
    i = 0;
    while(node)
    {
        node = node->next;
        i++;
    }
    return (i);
}