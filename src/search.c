/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:45:34 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/10 15:50:50 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *search_min()
{

}
t_stack *search_max()
{

}
t_stack *search_last(t_stack *stack)
{
    if(!stack)
        return(NULL);
    while(stack->next)
        stack = stack->next;
    return(stack);
}