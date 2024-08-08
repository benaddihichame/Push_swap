/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:17:50 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/08 12:31:27 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    three_node(t_stack **a)
{
    t_stack *max;

    max = search_max(*a);
    if(max == *a)
        ra(a);
    else if((*a)->next == max)
        rra(a);
    if((*a)->num > (*a)->next->num)
        sa(a);
}
void	push_cheapest_node(t_stack **a, t_stack **b)
{
    int mid_a;
    int mid_b;
    t_stack *cheapest_box;

    mid_a = mod_len(*a) / 2;
    mid_b = mod_len(*b) / 2;
    cheapest_box = search_cheapest(a, b);
    while(*a != cheapest_box)
    {
        if(cheapest_box->position < mid_a)
            ra(a);
        else
            rra(a);
    }
    while (*b != cheapest_box->target)
    {
        if(cheapest_box->position < mid_b)
            rb(b);
        else
            rrb(b);
    }
    pb(a, b);
}
void    back_to_a(t_stack **a, t_stack**b)
{
    t_stack *target;
    t_stack *tmp;

    tmp = *b;
    if(!tmp)
        return ;
    target = find_a_target(tmp, a);
    while(*a != target)
        rra(a);
    pa(a, b);
}
void algo(t_stack **a, t_stack **b)
{
    int len_a;

    len_a = mod_len(*a);
    if (len_a-- > 3)
        pb(a, b);
    if (len_a-- > 3)
        pb(a, b);
    while (len_a > 3)
    {
        push_cheapest_node(a, b);
        len_a--;
    }
    three_node(a);
    while (mod_len(*b) != 0)
    {
        back_to_a(a ,b);
    }
    while(!stack_sorted(a))
        rra(a);
}
