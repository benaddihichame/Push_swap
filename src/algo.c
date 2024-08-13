/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:17:50 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/08/13 13:02:45 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    three_node(t_stack **a)
{
    t_stack *max;

    max = search_max(a);
    if(max == *a)
        ra(a);
    else if((*a)->next == max)
        rra(a);
    if((*a)->num > (*a)->next->num)
        sa(a);
}
void    push_cheapest_box(t_stack **a, t_stack **b)
{
    t_stack *cheapest_box;
    int middle_a;
    int middle_b;

    cheapest_box = search_cheapest(a, b);
    middle_a = mod_len(a) / 2;
    middle_b = mod_len(b) / 2;
    ft_printf("Cheapest box: %d\n", cheapest_box->num);
    ft_printf("Target: %d\n", cheapest_box->target->num);
    while (*a != cheapest_box)
    {
        if(cheapest_box->position < middle_a)
            ra(a);
        else
            rra(a);
    }
    while (*b != cheapest_box->target)
    {
        if (cheapest_box->target->position < middle_b)
            rb(b);
        else
            rrb(b);
    }
    pb(a, b);
}
void    push_to_a(t_stack **a, t_stack **b)
{
    t_stack *target;
    t_stack *tmp;

    tmp = *b;
    target = search_target_to_a(tmp, a);
    while(*a != target)
        rra(a);
    pa(a, b);
}
void    algo(t_stack **a, t_stack **b)
{
    if(mod_len(a) > 3)
        pb(a, b);
    if(mod_len(a) > 3)
        pb(a, b);
    while (mod_len(a) > 3)
        push_cheapest_box(a, b);
    three_node(a);
    while(mod_len(b) != 0)
        push_to_a(a, b);
    while(stack_sorted(a) == false)
        rra(a);
}