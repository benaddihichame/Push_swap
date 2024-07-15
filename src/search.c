/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:45:34 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/15 12:15:56 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *search_min(t_stack *stack)
{
    long    minus;
    t_stack *minus_pos;

    minus = LONG_MAX;
    minus_pos = NULL;
    if(!stack)
        return (NULL);
    while(stack)
    {
        if(stack->num < minus)
        {
            minus_pos = stack;
            minus = stack->num;
        }
        stack = stack->next;
    }
    return (minus_pos);
}
t_stack *search_max(t_stack *stack)
{
    long max;
    t_stack *max_pos;
   
    if(!stack)
        return (NULL);
    max = LONG_MIN;
    max_pos = NULL;
    while(stack)
    {
        if (stack->num > max)
        {
            max = stack->num;
            max_pos = stack;
        }
        stack = stack->next;
    }
    return (max_pos);
}
t_stack *search_last(t_stack *stack)
{
    if(!stack)
        return(NULL);
    while(stack->next)
        stack = stack->next;
    return(stack);
}