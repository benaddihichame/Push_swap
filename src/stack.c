/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenaddi <hbenaddi@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:10:11 by hbenaddi          #+#    #+#             */
/*   Updated: 2024/07/16 15:36:49 by hbenaddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// ajoute un nouveau cube a la fin de la pile ou le met en premier
static void add_node(t_stack **stack, int n)
{
    t_stack *node;
    t_stack *last;

    if(!stack)
        return;
    node = malloc(sizeof(t_stack));
    if(!node)
        return;
    node->next = NULL;
    node->num = n;
    if(!(*stack))
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last = search_last(*stack);
        last->next = node;
        node->prev = last;
    }
}
void sort(t_stack *stack)
{
    if(!stack)
        return;
    while(stack)
    {
        
    }
}
void    target_node(t_stack *a, t_stack *b)
{
    
}
void    three_node(t_stack **a)
{
    t_stack *max;

    max = search_max(*a);
    if(max == *a)
        ra(a, true);
    else if((*a)->next == max)
        rra(a, true);
    if((*a)->num > (*a)->next->num)
        sa(a, true);
}