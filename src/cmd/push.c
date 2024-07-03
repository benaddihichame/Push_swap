/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:17:15 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/03 16:10:47 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void push(t_stack **dst, t_stack **src)
{
    t_stack     *need_pushe_node;

    if(!src || !*src)
        return;
    need_pushe_node = *src;
    *src = (*src)->next;
    if(*src)
        (*src)->prev = NULL;
    need_pushe_node->next = NULL;
    if(!*dst)
    {
        *dst = need_pushe_node;
        need_pushe_node->next = NULL;
    }
    else
    {
        need_pushe_node->next = *dst;
        need_pushe_node->next->prev = need_pushe_node;
        *dst = need_pushe_node;
    }
}
void    pa(t_stack **a, t_stack **b, bool print)
{
    push(a, b);
    if(!print)
        ft_printf("pa\n");
}

void    pb(t_stack **a, t_stack **b, bool print)
{
    push(b, a);
    if(!print)
        ft_printf("pb\n");
}